const int led_pin = 0;
const int touch_pin = 3;
byte state = 0;

void setup() {
  pinMode(led_pin, OUTPUT);
  pinMode(touch_pin, INPUT);
}

void loop() {

  if (digitalRead(touch_pin) == HIGH and state == 0) {
    for (int x = 0; x < 255; x++) {
      analogWrite(led_pin, x);
      delay(5);
    }
    state = 1;
  }


  if (digitalRead(touch_pin) == HIGH and state == 1) {
    for (int x = 255; x >= 0; x--) {
      analogWrite(led_pin, x);
      delay(5);
    }
    state = 0;
  }
  delay(100);
}
