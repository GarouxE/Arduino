/* Moteur pas à pas est un programme qui fait tourner un moteur pas à pas dans un sens puis dans l'autre*/

#include <Stepper.h>                                // appel de la bibliothèque

#define enroulement_1 2                         // affectation des broches
#define enroulement_2 3
#define enroulement_3 4
#define enroulement_4 5

const int nombre_pas=2048;                  // nombre de pas du moteur

Stepper moteur(nombre_pas, enroulement_1, enroulement_3, enroulement_2, enroulement_4);    // création de l'objet moteur

void setup()   
{
moteur.setSpeed(5);                              // initialisation la vitesse de rotation du moteur en tour par minute
pinMode(enroulement_1, OUTPUT);       // configuration des broches en sortie
pinMode(enroulement_2, OUTPUT);       
pinMode(enroulement_3, OUTPUT);     
pinMode(enroulement_4, OUTPUT);  
}

void loop()
{
for (int i=1; i<=nombre_pas; i++)            // boucle avance du moteur en fonction du nombre de pas
{
  moteur.step(1);                                       // un pas en sens positif
}

}