int enA = 9;
int in1 = 8;
int in2 = 7;
int bouton1= 2;
int bouton2 = 3;
int bouton3 = 4;
int capteur1 = 5
int capteur2 = 6
int capteur3 = 12
int capteur4 = 13
const int broche = 11;

void setup() {
  pinMode(enA , OUTPUT);
  pinMode(in1 , OUTPUT);
  pinMode(in2 , OUTPUT);

  pinMode(broche,OUTPUT);
  digitalWrite(broche,0);

  pinMode(capteur1 , OUTPUT);  
  pinMode(capteur2 , OUTPUT); 
  pinMode(capteur3 , OUTPUT); 
  pinMode(capteur4 , OUTPUT);


  digitalWrite( in1, LOW);
  digitalWrite( in2, LOW);

  Serial.begin(9600);
  
}


void TourneADroite(int i){
  digitalWrite(in1, LOW);
  digitalWrite( in2, HIGH);
  analogWrite(enA,i);
}
void TourneAGauche(int i){
  digitalWrite(in1, HIGH);
  digitalWrite( in2, LOW);
  analogWrite(enA,i);
}
void loop() {
 
  
  if (digitalRead(bouton1)==LOW and digitalRead(capteur1)==HIGH and digitalRead(capteur2)==HIGH){
    Serial.println("100");
    TourneADroite(250); 
    digitalWrite(bouton3, LOW);
   

  }
  if((digitalRead(bouton2)==LOW)){
    digitalWrite(bouton3, LOW);
    TourneAGauche(250);
    Serial.println("200"); 
    
  }
  if((digitalRead(bouton3)==LOW)){
    digitalWrite(broche,1);
    delay(300);
    digitalWrite(broche,0);

    
  }
 
    
  if((digitalRead(bouton2)==HIGH)&&((digitalRead(bouton1)==HIGH))){
  analogWrite(enA,0);
  }
  }