const int ledPin = 9;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  Serial.println("Arduino готово");
}

void loop() {
  if (Serial.available()) {
    String input = Serial.readStringUntil('\n');
    input.trim(); // Убираем пробелы и символы переноса строки

    Serial.print("Получено: ");
    Serial.println(input); // ← Выводим в монитор

    if (input == "1") {
      digitalWrite(ledPin, HIGH);
      delay(1000); // Горит 1 секунду
      digitalWrite(ledPin, LOW);
    }
  }
}
