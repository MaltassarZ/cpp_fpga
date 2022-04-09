#ifndef __U_SOCKET_H__
#define __U_SOCKET_H__

#include <winsock2.h>

#include <stdio.h>
#include <string>
#include <vector>

#define UDP_PACKET_SIZE 1440

class Sockets
{
public:
    Sockets();
    Sockets(int localPort, const std::string& localIpAddr = std::string());
    virtual ~Sockets();

    void setNonblocking(bool value);

    int send(const char* buf, int len, int remotePort, const std::string &remoteIpAddr);
    int recv(char* buf, int len);

    inline bool is_valid(){return m_socket;}
    inline bool is_binded(){return m_binded;}

    // это порт который слушает сокет
    int getLocalPort() const;
    void setLocalPort(int val);

    std::string getLocalIpAddr() const;
    void setLocalIpAddr(const std::string& val);

    bool init_nonlistening_socket();
    bool bind();
    bool bind(int localPort, const std::string& localIpAddr = std::string());
    void unbind();

    SOCKET getSocket() { return m_socket; }

protected:
    bool init();
    bool setOption(int option, bool value);

protected:
    SOCKET m_socket;
    struct sockaddr_in m_from_addr;
    int m_from_addr_len;
    struct sockaddr_in m_localAddr;
    struct sockaddr_in m_remoteAddr;
    int m_localPort;
    std::string m_localIpAddr;
    bool m_is_reuse_addr_option;
    bool m_is_exclusive_addr_use_option;
    bool m_is_use_socket_options;
    bool m_is_error;
    bool m_binded;
    int m_errno; // код ошибки последней отправки
};

#endif
