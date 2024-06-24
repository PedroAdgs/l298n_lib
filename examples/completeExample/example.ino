#include "l298n_lib.hpp"

//defina aqui os pinos utilizados
#define ENA 9
#define IN1 8
#define IN2 7
#define ENB 6
#define IN3 5
#define IN4 4

L298N motorController(ENA, IN1, IN2, ENB, IN3, IN4); //Objeto criado (motores) -> criar um objeto por motor

void setup(){
 Serial.begin(9600); //inicializa comunicação serial
 }

void loop()
 {

  Serial.println("Motores para frente");
  motorController.setSpeed(1, 255); 
  motorController.setSpeed(2, 255); 
  motorController.forward();
  delay(2000); 
  
  Serial.println("Motores para trás");
  motorController.setSpeed(1, 255); 
  motorController.setSpeed(2, 255); 
  motorController.backward();
  delay(2000); 

  Serial.println("Virando à esquerda");
  motorController.setSpeed(1, 255); 
  motorController.setSpeed(2, 255); 
  motorController.left();
  delay(1000); 

  Serial.println("Virando à direita");
  motorController.setSpeed(1, 255); 
  motorController.setSpeed(2, 255); 
  motorController.right();
  delay(1000); 
  
  Serial.println("Parando os motores");
  motorController.stop();
  delay(2000); 
}
