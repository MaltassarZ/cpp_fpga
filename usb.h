#ifndef USB_H
#define USB_H


class Usb
{
public:
    Usb();
    void init();
    void startWork();
private:
    void ReadCOM();
};

#endif // USB_H
