// Taster mit externem Pull-up

int led = 13;
int pin = 12;
int value = 0;
int prev = 0;
int vals[] = {HIGH, LOW};

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(pin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  value = digitalRead(pin);
  if (value == 0) {
    prev = (prev + 1) % 2;
    digitalWrite(led, vals[prev]);
  }
}
