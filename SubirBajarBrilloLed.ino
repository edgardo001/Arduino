int ledPin = 9;         // Pin controlado por PWM
void setup() {
  //Inicializa el puerto de comunicacion serial a 9600 bits por segundo:
  Serial.begin(9600);
}
void loop() {
  Serial.println("Inicia");
  for (int i = 0; i <= 255; i++) {
    Serial.print("|");
    Serial.print(i);
    analogWrite(ledPin, i);// Establece el brillo a i
    delay(5);// Pausa de 25 ms
  }
  Serial.println("==============================");
  for (int i = 255; i >= 0; i--) {
    Serial.print("|");
    Serial.print(i);
    analogWrite(ledPin, i);
    delay(5);
  }
  Serial.println("Termina");
}
