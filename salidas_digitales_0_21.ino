/*
  Programa para encender varios LEDS en función do
  valor dunha variable.
  
  Autor: Daniel
  Data: Novembro 2026
*/

String cor = "azul";

void setup() {
  pinMode(13, OUTPUT); 
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT); 
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  
  Serial.begin(9600); 
}

void loop() {
  if(Serial.available()) {
    cor = Serial.readString(); 
  }
  
  //Se a variable cor ten o valor verde, acende o LED verde,
  //en caso contrario, acende o LED vermello.
  if(cor == "rojo") {
    digitalWrite(13, HIGH);
    Serial.print("LED rojo aceso; "); 
    delay(500); 
    digitalWrite(13, LOW); 
    Serial.println("LED rojo apagado");
    delay(500); 
  }
  else if(cor == "verde") {
    digitalWrite(12, HIGH);
    Serial.print("LED verde aceso; "); 
    delay(500); 
    digitalWrite(12, LOW); 
    Serial.println("LED verde apagado");
    delay(500); 
  }
  else if(cor == "amarillo") {
    digitalWrite(11, HIGH);
    Serial.print("LED amarillo aceso; "); 
    delay(500); 
    digitalWrite(11, LOW); 
    Serial.println("LED amarillo apagado");
    delay(500); 
  }
 else if(cor == "blanco") {
    digitalWrite(10, HIGH);
    Serial.print("LED blanco aceso; "); 
    delay(500); 
    digitalWrite(10, LOW); 
    Serial.println("LED blanco apagado");
    delay(500); 
  }
 else if(cor == "azul") {
    digitalWrite(9, HIGH);
    Serial.print("LED azul aceso; "); 
    delay(500); 
    digitalWrite(9, LOW); 
    Serial.println("LED azul apagado");
    delay(500); 
  }
 else if(cor == "naranja") {
    digitalWrite(8, HIGH);
    Serial.print("LED naranja aceso; "); 
    delay(500); 
    digitalWrite(8, LOW); 
    Serial.println("LED naranja apagado");
    delay(500); 
  }
  else {
    Serial.println("Todos os LEDs apagados"); 
  }
}
