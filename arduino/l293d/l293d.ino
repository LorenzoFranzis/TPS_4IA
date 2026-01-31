void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);

  Serial.begin(9600);

  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  analogWrite(11, 255);
}

char input;

void loop() {
  if(Serial.available()){
    input = Serial.read();
    if(input == 'd'){
      digitalWrite(13, HIGH);
      digitalWrite(12, LOW);
      Serial.write("destra\n");
    }if(input == 's'){
      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
      Serial.write("sinistra\n");
    }if(input == 'h'){
      analogWrite(11, 255);
      Serial.write("high\n");
    }if(input == 'l'){
      analogWrite(11, 0);
      Serial.write("low\n");
    }
  }
}
