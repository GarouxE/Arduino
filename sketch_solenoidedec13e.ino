int BROCHE = 8;

void setup() {
  pinMode(BROCHE, OUTPUT);
}


void loop() {
  digitalWrite(BROCHE, HIGH);   
  delay(1000);                       // wait for a second
  digitalWrite(BROCHE, LOW);    
}