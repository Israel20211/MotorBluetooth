#include<SoftwareSerial.h>
int rx=10;
int tx=11;
SoftwareSerial Motorconfig(rx,tx);
void setup() {
	Serial.begin(9600);
	Motorconfig.begin(38400);
	Serial.print("Listo\n");
}
void loop(){
	if(Motorconfig.available()){
		Serial.write(Motorconfig.read());
	}
	if(Serial.available()){
		Motorconfig.write(Serial.read());
	}
}
