void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);//PIN13 sends power to the LED
  pinMode(A2, INPUT);//sets A2 to read the INPUT
}

void loop() {
  // put your main code here, to run repeatedly:
  int foilState = digitalRead (A2);//checks if the foils are toucing, and whether its HIGH or LOW

  if (foilState == HIGH) {//if the foils are touching
    digitalWrite (13, HIGH);//it will turn the LED on
  } else {//and if the foils are not touching
    digitalWrite (13, LOW);// itll turn the LED off
  }
}
