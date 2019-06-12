//programa creado por juan jose nontoa posada y juan jose plata perez. 
//codigo para mover los servomotores del brazo robotico.
#include<Servo.h>
#define pinBase 12 //Defino el pin del motor base
Servo motorBase; //Declaro el motor de la base
#define pinDerecho 11 //Defino el pin del motor derecho
Servo motorDerecho;
#define pinIzquierdo 10
Servo motorIzquierdo;
#define pinMano 9
Servo motorMano;
void setup() {
  Serial.begin (9600);
  motorBase.attach(pinBase);
  motorDerecho.attach(pinDerecho);
  motorIzquierdo.attach(pinIzquierdo);
  motorMano.attach(pinMano);
  
}

void loop() {
  
    motorBase.write(10);
    motorDerecho.write(10);
    motorIzquierdo.write(90);
    motorMano.write(60);

    delay(2000);// Espera 2 seg
 


  motorBase.write(50);
  motorDerecho.write(30);
  motorIzquierdo.write(50);
  motorMano.write(70);
  
  delay(2000);


  motorBase.write(90);
  motorDerecho.write(90);
  motorIzquierdo.write(70);
  motorMano.write(80);
  
  delay(2000);// Espera 2 seg



    motorBase.write(130);
    motorDerecho.write(70);
    motorIzquierdo.write(10);
    motorMano.write(90);
    
    delay(2000);// Espera 2 seg


  motorBase.write(170);
  motorDerecho.write(50);
  motorIzquierdo.write(30);
  motorMano.write(100);
  
  delay(2000);


}
