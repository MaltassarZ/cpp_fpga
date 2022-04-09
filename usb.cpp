#include "usb.h"

using namespace std;

Usb::Usb()
{

}

void Usb::init()
{
    LPCTSTR sPortName = L"COM1";
    m_hSerial = ::CreateFile(sPortName,GENERIC_READ |
                           GENERIC_WRITE,0,0,OPEN_EXISTING,FILE_ATTRIBUTE_NORMAL,0);
    if(m_hSerial==INVALID_HANDLE_VALUE)
    {
            if(GetLastError()==ERROR_FILE_NOT_FOUND)
        {
            cout << "serial port does not exist.\n";
        }
        cout << "some other error occurred.\n";
    }
    DCB dcbSerialParams = {0};
    dcbSerialParams.DCBlength=sizeof(dcbSerialParams);
    if (!GetCommState(m_hSerial, &dcbSerialParams))
    {
        cout << "getting state error\n";
    }
    dcbSerialParams.BaudRate=CBR_9600;
    dcbSerialParams.ByteSize=8;
    dcbSerialParams.StopBits=ONESTOPBIT;
    dcbSerialParams.Parity=NOPARITY;
    if(!SetCommState(m_hSerial, &dcbSerialParams))
    {
        cout << "error setting serial port state\n";
    }
    //BOOL iRet = WriteFile (hSerial,data,dwSize,&dwBytesWritten,NULL);
    //cout << dwSize << " Bytes in string. " << dwBytesWritten << " Bytes sended. " << endl;

}

void Usb::startWork()
{
    while (1)
    {
        ReadCOM();
    }
}

void Usb::ReadCOM()
{
      DWORD iSize;
      char sReceivedChar;
      //while (true)
      {
            ReadFile(m_hSerial, &sReceivedChar, 1, &iSize, 0);  // получаем 1 байт
            if (iSize > 0)   // если что-то принято, выводим
                //cout << sReceivedChar;
                m_comText.push_back(sReceivedChar);
      }
}

bool Usb::getString(std::string &strOut)
{
    if (!m_comText.empty())
    {
        strOut = m_comText;
        m_comText.clear();
        return true;
    }
    else
    {
        return false;
    }
}
