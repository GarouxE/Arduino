// Inclut la bibliothèque Arduino Stepper.h:
#include <Stepper.h>

// Définit le nombre de pas par rotation:
const int stepsPerRevolution = 2048;

// Câblage:
// Broche 8 à IN1 sur le pilote ULN2003
// Broche 9 à IN2 sur le pilote ULN2003
// Broche 10 à IN3 sur le pilote ULN2003
// Broche 11 à IN4 sur le pilote ULN2003

// Créez un objet stepper appelé 'myStepper', notez l'ordre des broches:
Stepper myStepper = Stepper ( stepsPerRevolution, 8, 10, 9, 11 ) ;

void setup() {
// Réglez la vitesse sur 5 tr / min:
  myStepper.setSpeed(5);

// Commencez la communication série à une vitesse de transmission de 9600:
  Serial.begin(9600);
}

void loop() {
// Étape d'une révolution dans une direction:
Serial.println("clockwise");
  myStepper.step(stepsPerRevolution);
  delay(500);
// Étape d'une révolution dans l'autre sens:
Serial.println("counterclockwise");
  myStepper.step(-stepsPerRevolution);
  delay(500);
}
