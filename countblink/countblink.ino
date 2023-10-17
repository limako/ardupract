int led = 6;
void setup() {
 pinMode(led, OUTPUT);
 Serial.begin(9600);
}

void loop() {
  int times = 0;
  // This waits until it receives an integer via the serial connection
  times = Serial.parseInt();
  // this loops the number of times entered.
  for (int i=0;i < times; i++) {  
    digitalWrite(led, HIGH);
    delay(250);
    digitalWrite(led, LOW);
    delay(250);
  }
  Serial.println("done!");
}
