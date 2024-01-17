const int bouton = 8;
const int broche = 2;
int val=0;

void setup() {
  pinMode(bouton, INPUT);
  pinMode(broche,OUTPUT);
  digitalWrite(broche,LOW);
  Serial.begin(9600);

}


void loop() {
  val=digitalRead(bouton);
  if (val==HIGH){
    digitalWrite(broche,LOW);
    Serial.println("1");
    delay(500);
    
  }
  else{
    Serial.println("2");
  }
  
  
}