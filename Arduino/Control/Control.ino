#include <SoftwareSerial.h>
SoftwareSerial Motor(10,11);
int Derecha=3;
int Izquierda=4;
int rx=10;
int tx=11;
void setup() {
 Serial.begin(9600);
 Motor.begin(9600);
 Serial.print("Listo\n");
 pinMode(Derecha, OUTPUT);
 pinMode(Izquierda, OUTPUT);
}

void loop() {
  if(Motor.available()){
    char Boton = Motor.read();
    if(Boton=='1'){
      digitalWrite(Derecha, HIGH);
      digitalWrite(Izquierda, LOW);
    }
    else{
      if(Boton=='0'){
      digitalWrite(Izquierda, HIGH);
      digitalWrite(Derecha, LOW);
      }
      else{
        digitalWrite(Izquierda, LOW);
        digitalWrite(Derecha, LOW);
      }
    }
  }
}
