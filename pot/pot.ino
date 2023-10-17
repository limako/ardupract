int led = 6;
void setup() {
 pinMode(led, OUTPUT);
 // This turns on the serial connection
 Serial.begin(9600);
}

void loop() {
  int pot;
  digitalWrite(led, HIGH);
  pot = analogRead(A5);
  // The Serial.print command doesn't issue a new line
  Serial.print(pot);
  delay(pot);
  // so we can print a comma
  Serial.print(",");
  // then make a new reading
  pot = analogRead(A5);
  // And print another value with a newline
  Serial.println(pot);
  digitalWrite(led, LOW);
  delay(pot);
}
