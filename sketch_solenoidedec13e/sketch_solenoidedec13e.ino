const int bouton = 8;
const int broche = 2;
int val=0;

void setup() {
  pinMode(bouton, INPUT);
  pinMode(broche,OUTPUT);
  digitalWrite(broche,0);
  Serial.begin(9600);

}


void loop() {
  val=digitalRead(bouton);
  if (val==LOW){
    digitalWrite(broche,1);
    Serial.println("1");
    delay(300);
    
  }
  else{
    Serial.println("2");
    digitalWrite(broche,0);
    delay(300);
  }
  
  
}
