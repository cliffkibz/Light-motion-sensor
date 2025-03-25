#define SENSOR_PIN 2
#define RELAY_PIN 3

void setup(){
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(SENSOR_PIN, INPUT);
}
void loop(){
  int sensorValue = digitalRead(SENSOR_PIN);
  if (sensorValue == HIGH){//If movement is detected the bulb turns on
    digitalWrite(RELAY_PIN, LOW); //stays on for 3 seconds
  } 

  else { //else it stays off
    digitalWrite(RELAY_PIN, HIGH);
  }
}
