#include "dht.h"
dht DHT;

	void HTD11::init(int _analogPin) {
		inputpin = _analogPin;
};
	
	void HTD11::update(){
		DHT.read11(_analogPin);
}
	void HTC11::dumpSerial(){
		
		//tempC 
		Serial.print("temperature =");
		Serial.print(DHT.temperature);
		Serial.print("C ");
	
		//Humiidty 
		Serial.print("Current humidity =")
		Serial.print(DHT.humidity)
		Serial.print("% ")
	}
	