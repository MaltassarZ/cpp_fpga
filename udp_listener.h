#ifndef UDP_LISTENER_H
#define UDP_LISTENER_H

#include <sockets.h>


class UdpListener : public Sockets//, public TSysThread
{
public:
    UdpListener();
    UdpListener(int localPort, const std::string& localIpAddr = std::string());
    virtual ~UdpListener();

    void Listen();

protected:
    void execute();
public:
    virtual void OnUdpReceived(const char* buf, int len) = 0;
};








#endif // UDP_LISTENER_H
