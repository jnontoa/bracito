//programa creado por juan jose nontoa posada y juan jose plata perez. 
//codigo para mover los servomotores del brazo robotico.

#include <Servo.h>

#define pinHombro 13//declaro cada pin de los servomotores
#define pinCodo 12
#define pinPinzas 10
#define pinBase 9

Servo motorHombro;//declaro los motores
Servo motorCodo;
Servo motorPinzas;
Servo motorBase;

void setup() 
{
   motorHombro.attach(13);
   motorCodo.attach(12);
   motorPinzas.attach(10);
   motorBase.attach(9);
   Serial.begin(9600);   
}

void loop() 
{
   motorBase.write(0);//leer cada servo y que se muevan en una direccion
   delay(1000);
   motorBase.write(90);
   delay(1000);
   
   motorCodo.write(0);
   delay(1000);
   motorCodo.write(90);
   delay(1000);

   motorHombro.write(0);
   delay(1000);
   motorHombro.write(90);
   delay(1000);
   
   motorPinzas.write(0);//saludo con las pinzas
   delay(1000);
   motorPinzas.write(90);
   delay(1000);
   motorPinzas.write(165);
   delay(1000);
   motorPinzas.write(90);
   delay(1000);
   motorPinzas.write(0);
   delay(1000);
   motorPinzas.write(90);
   delay(1000);
}
