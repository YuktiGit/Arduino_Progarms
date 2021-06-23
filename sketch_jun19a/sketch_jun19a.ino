int soundSensor;
int LED;
boolean LEDStatus;

void setup() {
 pinMode(soundSensor,INPUT);
 pinMode(LED,OUTPUT);

}

void loop() {
  int SensorData = digitalRead(soundSensor); 
  if(SensorData == 1){
     if(LEDStatus == false){
        LEDStatus = true;
        digitalWrite(LED,HIGH);
    }
    else{
        LEDStatus=false;
        digitalWrite(LED,LOW);
    }
  }
 }
