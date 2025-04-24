void loop() {
  if (Serial.available()) {
    Serial.println("👂 Данные пришли!");
    String input = Serial.readStringUntil('\n');
    input.trim();

    Serial.print("📥 Получено: ");
    Serial.println(input);

    if (input == "1") {
      digitalWrite(ledPin, HIGH);
      delay(1000);
      digitalWrite(ledPin, LOW);
      Serial.println("💡 Лампа включена");
    }
  }
}
