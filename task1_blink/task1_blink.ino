// Lab 6 - Task 1: Blink an external LED once per second
// Wiring: Pin 9 -> 330 ohm resistor -> LED anode (long leg); LED cathode (short leg) -> GND

const int LED_PIN = 9;

void setup() {
  pinMode(LED_PIN, OUTPUT);     // configure pin 9 as an output
}

void loop() {
  digitalWrite(LED_PIN, HIGH);  // LED on
  delay(500);                   // wait 0.5 s
  digitalWrite(LED_PIN, LOW);   // LED off
  delay(500);                   // wait 0.5 s  -> one full blink per second
}
