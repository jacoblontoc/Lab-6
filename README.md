
https://github.com/user-attachments/assets/e0beb8c1-f511-40cd-8060-097105ba94b9

## Upload and run

Open `task1_blink/task1_blink.ino` or `task2_two_leds/task2_two_leds.ino` in the Arduino IDE, select **Tools → Board → Arduino Uno** and the Uno's COM port, then click **Upload**.

## Design

For this lab, I used LED1 on D9 and LED2 on D10. Each pin was connected to a 330-ohm resistor to the anode end. The cathode end was routed to the GND bus which led to the Ardiuno's GND pin.

## Code

Task 1 sets D9 as the output, and will toggle HIGH and LOW every 500ms with delay().

Task 2 requires two segments of the LED with different timings. I maintained the D9 segment with a 500ms alternation, but I added D10 for every 1000ms so it was now alternatively syncopated. Instead of using delay however, I used millis(). So on every pass through loop(), the program checks whether that LED's interval has passed. So now that they both are on millis(), they run independently without blocking one another.
