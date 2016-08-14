// Tasten einlesen

int led = 13;
int pin = 12;
int value = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(pin, INPUT);
  digitalWrite(pin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  value = digitalRead(pin);
  digitalWrite(led, value);
}
