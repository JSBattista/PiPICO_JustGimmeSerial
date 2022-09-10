/*
 Just gimme serial!!!!!
 Based on
  https://www.arduino.cc/en/Tutorial/BuiltInExamples/SerialPassthrough
  
  
  
  Use Tools->Boards->Raspberry Pi 2040 Boards(X.X.X)->Raspberry Pi Pico
  
  
*/

void setup() {
  Serial.begin(9600);   // Serial alone does not have set RX, TX
  Serial1.setTX(0);
  Serial1.setRX(1);
  Serial1.begin(9600);
  Serial2.setTX(4);
  Serial2.setRX(5);
  Serial2.begin(9600);
}

void loop() {
  delay(1000);
  Serial.write("Brown Cow\n");
  Serial1.write("Hey\n");
  Serial2.write("now\n");
}
