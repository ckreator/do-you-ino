// Read Analog input sample
// ADC - Analog Digital Converter

int ADC0 = 0;
int value;
int LEDpin = 13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  value = analogRead(ADC0);
  Serial.print("ADC0 = ");
  Serial.println(value);
  delay(1000);
}
