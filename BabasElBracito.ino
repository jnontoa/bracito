#include <Servo.h>
#include<SoftwareSerial.h>

#define pinBase 12 //Defino el pin del motor base
Servo motorBase; //Declaro el motor de la base
#define pinDerecho 7 //Defino el pin del motor derecho
Servo motorDerecho;
#define pinIzquierdo 9
Servo motorIzquierdo;
#define pinMano 5
Servo motorMano;

#define TxBluetooth 3
#define RxBluetooth 2 
SoftwareSerial BT(RxBluetooth,TxBluetooth);


void setup() 
{
 Serial.begin(9600);
 BT.begin(9600);
 
 motorBase.attach(pinBase);
 motorDerecho.attach(pinDerecho);
 motorIzquierdo.attach(pinIzquierdo);
 motorMano.attach(pinMano);
 

 
    motorBase.write(90);
    motorDerecho.write(90);
    motorIzquierdo.write(90);
    motorMano.write(60);

}
int i,j,k;
char s[6];

void loop() 
{ if(BT.available()>0&&BT.available()<=6)
  {
    BT.readBytes(s,6);
    Serial.println(s);
   switch(s[0])
  { 
    case 'b': i=(s[1]-48)*100;
    j=(s[2]-48)*10;
    k= i+j+(s[3]-48);
    
    motorBase.write(k); 
    Serial.println(k);
    break; 
    
    case 'd': i=(s[1]-48)*100;
    j=(s[2]-48)*10;
    k= i+j+(s[3]-48);
    
    motorDerecho.write(k); 
    Serial.println(k);
    break; 

    case 'i': i=(s[1]-48)*100;
    j=(s[2]-48)*10;
    k= i+j+(s[3]-48);
    
    motorIzquierdo.write(k); 
    Serial.println(k);
    break; 

    case 'm': i=(s[1]-48)*100;
    j=(s[2]-48)*10;
    k= i+j+(s[3]-48);
    
    motorMano.write(k); 
    Serial.println(k);
    break; 

    case 'a' ;
    

  
  }

  if(Serial.available()>0&&Serial.available()<=6)
  {
    Serial.readBytes(s,6);
    Serial.println(s);
  
  switch(s[0])
  { 
    case 'b': i=(s[1]-48)*100;
    j=(s[2]-48)*10;
    k= i+j+(s[3]-48);
    
    motorBase.write(k); 
    Serial.println(k);
    break; 
    
    case 'd': i=(s[1]-48)*100;
    j=(s[2]-48)*10;
    k= i+j+(s[3]-48);
    
    motorDerecho.write(k); 
    Serial.println(k);
    case 'i': i=(s[1]-48)*100;
    j=(s[2]-48)*10;
    k= i+j+(s[3]-48);
    
    motorIzquierdo.write(k); 
    Serial.println(k);
    break; 

    case 'm': i=(s[1]-48)*100;
    j=(s[2]-48)*10;
    k= i+j+(s[3]-48);
    
    motorMano.write(k); 
    Serial.println(k);
    break;
  }
  }
}
}
