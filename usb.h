#ifndef USB_H
#define USB_H

#include <windows.h>
#include <iostream>

class Usb
{
public:
    Usb();
    void init();
    void work();
private:
    HANDLE m_hSerial;

    void ReadCOM();
};

#endif // USB_H
