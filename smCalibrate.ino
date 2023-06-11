const int SensorPin = 32;
int numSample = 10;
int averageValue;

void setup() {
  Serial.begin(115200); // open serial port, set the baud rate as 9600 bps
}


void loop() {

   int analogValue = 0;
  for ( int i = 0; i < numSample; i++ ) {
    delay(250);    // Wait  milliseconds for sensor to settle.
    int readingSM = analogRead(SensorPin);     // Read the value from sensor.
    analogValue += readingSM;
      }

  averageValue = analogValue / numSample;
  Serial.print("Analog average: ");
  Serial.println(averageValue); //print the value to serial port
  delay(1000);
}
