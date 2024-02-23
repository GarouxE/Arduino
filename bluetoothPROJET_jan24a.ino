#include<SoftwareSerial.h>
#define RX 8
#define TX 9
#define boutonR 3
#define broche 2
#define in1 10
#define in2 5
#define enb 4
SoftwareSerial BlueT(RX,TX);


int PWM=128;
char DATA;

void setup() {
  
  Serial.begin(9600);
  Serial.println("Bonjour -Pret pour les commandes AT");
  BlueT.begin(9600);

  pinMode(boutonR,INPUT);
  pinMode(broche,OUTPUT);

  pinMode(enb,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);

 
  delay(500);
  }




void loop() {

  if (BlueT.available()){
    DATA=BlueT.read();
    if (DATA=='Y' and digitalRead(capteur3)==HIGH and digitalRead(capteur4)==HIGH)){
      digitalWrite(in2,HIGH);
      digitalWrite(in1,LOW);
      analogWrite(enb,200);
      Serial.println("gauche");
      
      
    }
    else if (DATA=='B' and digitalRead(capteur3)==HIGH and digitalRead(capteur4)==HIGH)){
      digitalWrite(in1,HIGH);
      digitalWrite(in2,LOW);
      analogWrite(enb,200);
      Serial.println("gauche");
      
      
    }
     else if (DATA=='y'){
      digitalWrite(in1,HIGH);
      digitalWrite(in2,LOW);
      analogWrite(enb,0);
      Serial.println("gauche");
      
      
    }
     else if (DATA=='b'){
      digitalWrite(in1,HIGH);
      digitalWrite(in2,LOW);
      analogWrite(enb,0);
      Serial.println("gauche");
      
      
    }
    
      
    
    
    else if (DATA=='R'){
      Serial.println("rouge");
      digitalWrite(broche,1);
      Serial.println("1");
      delay(300);
      digitalWrite(broche,0);
    }
  }
}
  



