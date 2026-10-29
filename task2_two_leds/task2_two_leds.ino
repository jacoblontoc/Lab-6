// Lab 6 - Task 2: Two LEDs blinking at different intervals
// LED1 (pin 9):  on 0.5 s / off 0.5 s  -> blinks once every second
// LED2 (pin 10): on 1 s   / off 1 s    -> blinks once every two seconds
// Wiring (each LED): Pin -> 330 ohm resistor -> LED anode (long leg); cathode (short leg) -> GND
//
// millis() is used instead of delay() so both LEDs are timed independently
// and neither one blocks the other.

const int LED1_PIN = 9;
const int LED2_PIN = 10;

const unsigned long LED1_INTERVAL = 500;   // ms per on/off half-cycle
const unsigned long LED2_INTERVAL = 1000;  // ms per on/off half-cycle

unsigned long led1LastToggle = 0;
unsigned long led2LastToggle = 0;
int led1State = LOW;
int led2State = LOW;

void setup() {
  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
}

void loop() {
  unsigned long now = millis();

  if (now - led1LastToggle >= LED1_INTERVAL) {
    led1LastToggle = now;
    led1State = !led1State;
    digitalWrite(LED1_PIN, led1State);
  }

  if (now - led2LastToggle >= LED2_INTERVAL) {
    led2LastToggle = now;
    led2State = !led2State;
    digitalWrite(LED2_PIN, led2State);
  }
}
