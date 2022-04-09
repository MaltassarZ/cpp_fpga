#include "sockets.h"

Sockets::Sockets()
    : m_socket(0), m_localPort(0)
{
    init();
}

Sockets::Sockets(int localPort, const std::string& localIpAddr)
{
    if (init())
    {
        bind(localPort, localIpAddr);
    }
}

Sockets::~Sockets()
{
    unbind();
    WSACleanup();
}

bool Sockets::init()
{
    memset(&m_localAddr, 0, sizeof(m_localAddr));
    memset(&m_remoteAddr, 0, sizeof(m_remoteAddr));

    m_binded = false;
    m_is_error = false;
    m_is_reuse_addr_option = false;
    m_is_exclusive_addr_use_option = false;
    m_is_use_socket_options = true;

#ifdef __WIN32__
    WSAData wsaData = {0};
    int iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);

    if (iResult != 0)
    {
        printf("WSAStartup error\n");
        return false;
    }
#endif

    return true;
}

void Sockets::unbind()
{
    if (m_socket)
    {
        shutdown(m_socket, SD_BOTH);
        closesocket(m_socket);
        m_socket = 0;
    }
}

int Sockets::getLocalPort() const
{
    return m_localPort;
}

void Sockets::setLocalPort(int val)
{
    if (m_localPort != val)
    {
        unbind();
        m_localPort = val;
    }
}

std::string Sockets::getLocalIpAddr() const
{
    return m_localIpAddr;
}

void Sockets::setLocalIpAddr(const std::string& val)
{
    if (m_localIpAddr != val)
    {
        unbind();
        m_localIpAddr = val;
    }
}

bool Sockets::init_nonlistening_socket()
{
    memset(&m_localAddr, 0, sizeof(m_localAddr));
    m_localAddr.sin_family = AF_INET;

    if (!m_localIpAddr.empty())
    {
        m_localAddr.sin_addr.s_addr = inet_addr(m_localIpAddr.c_str());
    }
    else
    {
        m_localAddr.sin_addr.s_addr = INADDR_ANY;
    }
    m_localAddr.sin_port = htons((u_short)m_localPort);

    m_socket = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);

    bool hasError = m_socket == INVALID_SOCKET;

    if (hasError)
    {
        m_socket = 0;
        return false;
    }

    return true;
}

bool Sockets::bind()
{
    unbind();

    int iResult;
    m_binded = false;

    bool hasError = !init_nonlistening_socket();

    if (m_is_use_socket_options)
    {
        if (!setOption(SO_REUSEADDR, m_is_reuse_addr_option) ||
                !setOption(SO_EXCLUSIVEADDRUSE, m_is_exclusive_addr_use_option))
            return false;
    }

    iResult = ::bind(m_socket, (sockaddr*)&m_localAddr, sizeof(m_localAddr));

    hasError = iResult == (int)INVALID_SOCKET;

    if (hasError)
    {
        closesocket(m_socket);
        m_is_error = true;
        m_socket = 0;
        return false;
    }

    m_is_error = false;
    m_binded = true;
    return true;
}

bool Sockets::bind(int localPort, const std::string& localIpAddr)
{
    m_localPort = localPort;
    m_localIpAddr = localIpAddr;

    return bind();
}

bool Sockets::setOption(int option, bool value)
{
    int result = 0;

    if (value)
        result = ::setsockopt(m_socket, SOL_SOCKET, option, "TRUE", sizeof(bool));
    else
        result = ::setsockopt(m_socket, SOL_SOCKET, option, "FALSE", sizeof(bool));
    return result == 0;
}

void Sockets::setNonblocking(bool value)
{
    int result = 0;
    u_long mode = 0;
    if (value) { mode = 1; }
    result = ioctlsocket(m_socket, FIONBIO, &mode);
}

int Sockets::send(const char* buf, int len, int remotePort, const std::string& remoteIpAddr)
{
    if (!m_socket || m_is_error || !remotePort || len > UDP_PACKET_SIZE)
    {
        return -1;
    }

    memset(&m_remoteAddr, 0, sizeof(m_remoteAddr));
    m_remoteAddr.sin_family = AF_INET;
    m_remoteAddr.sin_addr.s_addr = inet_addr(remoteIpAddr.c_str());
    m_remoteAddr.sin_port = htons((u_short)remotePort);
    return sendto(m_socket, buf, len, 0, (sockaddr*)&m_remoteAddr, sizeof(m_remoteAddr));
}

int Sockets::recv(char* buf, int len)
{
    if (!m_socket) return 0;

    m_from_addr_len = sizeof(m_from_addr);
    return recvfrom(m_socket, buf, len, 0, (sockaddr*)&m_from_addr, &m_from_addr_len);
}
