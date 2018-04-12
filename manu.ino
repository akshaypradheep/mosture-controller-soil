int moistSensor = A0;
int motor = 13;
int readValue;
void setup(){
  pinMode(motor,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  readValue = analogRead(moistSensor);
  Serial.println(readValue);
  if(readValue>800){
    digitalWrite(motor,HIGH);
  }
  else{
    digitalWrite(motor,LOW);
  }
  delay(100);
}

