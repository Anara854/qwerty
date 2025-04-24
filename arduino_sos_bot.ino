const int ledPin = 9; // Пин, к которому подключён светодиод

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT); // Настроить пин как выход
}

void loop() {
  if (Serial.available()) {
    char c = Serial.read();
    if (c == '1') {
      digitalWrite(ledPin, HIGH); // Включить светодиод
      delay(1000);                // Подержать 1 секунду
      digitalWrite(ledPin, LOW);  // Выключить
    }
  }
}
