/**********************************************************************
  Filename    : Sketch_1.1.1_Control_LED_by_Control_Board
  Description : Control LED by Control Board
  Auther      : www.freenove.com
  Modification: 2024/08/05
**********************************************************************/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
}