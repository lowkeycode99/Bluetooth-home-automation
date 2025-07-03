#define LIGHT_PIN 2
#define FAN_PIN 4
#define AC_PIN 5

void setup() {
  Serial.begin(115200);
  pinMode(LIGHT_PIN, OUTPUT);
  pinMode(FAN_PIN, OUTPUT);
  pinMode(AC_PIN, OUTPUT);

  digitalWrite(LIGHT_PIN, LOW);
  digitalWrite(FAN_PIN, LOW);
  digitalWrite(AC_PIN, LOW);

  Serial.println("Commands:");
  Serial.println("L - Light ON");
  Serial.println("l - Light OFF");
  Serial.println("F - Fan ON");
  Serial.println("f - Fan OFF");
  Serial.println("A - AC ON");
  Serial.println("a - AC OFF");
}

void loop() {
  if (Serial.available()) {
    char cmd = Serial.read();
    Serial.print("Received: ");
    Serial.println(cmd);

    if (cmd == 'L') {
      digitalWrite(LIGHT_PIN, HIGH);
      Serial.println("Light ON");
    } else if (cmd == 'l') {
      digitalWrite(LIGHT_PIN, LOW);
      Serial.println("Light OFF");
    } else if (cmd == 'F') {
      digitalWrite(FAN_PIN, HIGH);
      Serial.println("Fan ON");
    } else if (cmd == 'f') {
      digitalWrite(FAN_PIN, LOW);
      Serial.println("Fan OFF");
    } else if (cmd == 'A') {
      digitalWrite(AC_PIN, HIGH);
      Serial.println("AC ON");
    } else if (cmd == 'a') {
      digitalWrite(AC_PIN, LOW);
      Serial.println("AC OFF");
    }
  }
}
