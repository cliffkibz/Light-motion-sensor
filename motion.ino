#define SENSOR_PIN 2
#define RELAY_PIN 3

void setup(){
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(SENSOR_PIN, INPUT);
}
void loop(){
  int sensorValue = digitalRead(SENSOR_PIN);
  if (sensorValue == HIGH){
    //movement detected bulb: ON
    digitalWrite(RELAY_PIN, LOW); 
    //bulb ON for 3 secs
    delay(3000);
  } 

  else { 
    //bulb: OFF
    digitalWrite(RELAY_PIN, HIGH);
  }
}
