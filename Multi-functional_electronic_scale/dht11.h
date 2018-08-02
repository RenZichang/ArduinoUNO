 

#ifndef dht11_h
#define dht11_h

#if defined(ARDUINO) && (ARDUINO >= 100)
#include <Arduino.h>
#else
#include <WProgram.h>
#endif

#define DHT11LIB_VERSION "0.4.1"

#define DHTLIB_OK				0
#define DHTLIB_ERROR_CHECKSUM	-1
#define DHTLIB_ERROR_TIMEOUT	-2
#define k 2
#define m 1508
#define l 50

class dht11
{
public:
	double Fahrenheit(double celsius);
	double Kelvin(double celsius);
	double dewPoint(double celsius, double humidity);
	double dewPointFast(double celsius, double humidity);
	double waterNeeded(double celsius,double humidity);
	int read(int pin);
	int humidity;
	int temperature;
	double water;
};
#endif
//
// END OF FILE
//
