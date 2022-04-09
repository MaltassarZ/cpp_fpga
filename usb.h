#ifndef USB_H
#define USB_H

#include <windows.h>
#include <iostream>

class Usb
{
public:
    Usb();
    void init();
    void startWork();
    bool getString(std::string &strOut);
private:
    HANDLE m_hSerial;
    std::string m_comText;

    void ReadCOM();
};

#endif // USB_H
