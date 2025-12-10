void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);

  Serial.begin(9600);

  pinMode(13, HIGH);
  pinMode(12, LOW);
  analogWrite(11, 255);
}

char input;

void loop() {
  if(Serial.available()){
    input = Serial.read();
    if(input == 'd'){
      pinMode(13, HIGH);
      pinMode(12, LOW);
      Serial.write("destra\n");
    }if(input == 's'){
      pinMode(13, LOW);
      pinMode(12, HIGH);
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
