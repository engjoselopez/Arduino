const int relayPin = 7;  // Pin al que está conectado el relé
const int buttonPin = 2; // Pin al que está conectado el botón
int buttonState = 0;     // Variable para leer el estado del botón

void setup() {
  pinMode(relayPin, OUTPUT);  // Configura el pin del relé como salida
  pinMode(buttonPin, INPUT);  // Configura el pin del botón como entrada
  digitalWrite(relayPin, LOW); // Asegura que el relé esté apagado inicialmente
}

void loop() {
  buttonState = digitalRead(buttonPin); // Lee el estado del botón

  if (buttonState == HIGH) {
    digitalWrite(relayPin, HIGH); // Enciende la estufa
  } else {
    digitalWrite(relayPin, LOW);  // Apaga la estufa
  }
}
