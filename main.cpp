#include <iostream>
#include "SerialPort.h"

SerialPort arduino;

int main()
{
    std::string port = "\\\\.\\COM3";
    arduino.Init(port);
	
	char* charArray = new char[2];
	charArray2[0] = '2';
	charArray2[1] = '\n';
	arduino.writeSerialPort(charArray, 2);
}