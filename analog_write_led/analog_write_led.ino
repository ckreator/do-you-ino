// Make LED's blink often with Analog Write

int value;
int LEDgreen = 10;
int LEDred = 11;

void setup() {
  // put your setup code here, to run once:
  // nothing here, PWM does the work
}

void loop() {
  // put your main code here, to run repeatedly:
  for (value = 0; value < 255; value++) {
    analogWrite(LEDgreen, value);
    analogWrite(LEDred, 255 - value);
    delay(5);
  }

  delay(1000);

  for (value = 255; value != 0; value--) {
    analogWrite(LEDgreen, value);
    analogWrite(LEDred, 255 - value);
    delay(5);
  }

  delay(1000);
}
