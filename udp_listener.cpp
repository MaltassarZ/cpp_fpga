#include "udp_listener.h"

UdpListener::UdpListener() : Sockets()//, TSysThread()
{
}

UdpListener::UdpListener(int localPort, const std::string& localIpAddr)
    : Sockets(localPort, localIpAddr)
{
}

UdpListener::~UdpListener()
{
    //stop();
}

void UdpListener::Listen()
{
    //start();
}

void UdpListener::execute()
{
    char buf[4096];

    //while (!needToStop())
    {
        int recvLen = recv(buf, sizeof(buf));

        if (recvLen > 1452)
        {
            //
        }
        if (recvLen > 0)
            OnUdpReceived(buf, recvLen);
    }
}

