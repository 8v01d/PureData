int val[6]; //array 6 sensors total

void setup() {
    Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop() {
  for(int i = 0; i < 6; i++) {
    val[i] = analogRead(i);
    Serial.print(val[i]); 
    Serial.print("  "); 
  }
    Serial.println(); 
    delay(10);

}
