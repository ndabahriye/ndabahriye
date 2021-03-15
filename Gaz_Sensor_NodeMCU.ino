int smokeA0 = A0;
int sensorThres = 600;

void setup() {
pinMode(smokeA0, INPUT);
Serial.begin(9600);
}

void loop() 
{
int analogSensor = analogRead(smokeA0);

Serial.print("Gaz sensor: ");
Serial.println(analogSensor);
delay(2000); //Delaying of 2.0 secs
}
