// LED-Frequency through ADC

int ADC0 = 0;
int value;
int LEDpin = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  value = analogRead(ADC0);
  digitalWrite(LEDpin, HIGH);
  delay(value);
  digitalWrite(LEDpin, LOW);
  delay(value);
}
