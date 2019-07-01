
int photoresistorPin = 0;
int ledPin = 9;  
void setup() {
  // put your setup code here, to run once:
  analogReference(DEFAULT);
  Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println(analogRead(photoresistorPin)); 
  int brightnessValue = analogRead(photoresistorPin);
  brightnessValue = constrain(brightnessValue,600,1000);
  int ledValue = map(brightnessValue,600,1000,0,255);
  analogWrite(ledPin,ledValue);
  //delay(2000);
}
