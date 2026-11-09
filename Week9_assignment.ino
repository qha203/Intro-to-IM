
int led = 9; //PWM pin for the blue LED

void setup() {//runs once
  Serial.begin(9600);

  pinMode(13, OUTPUT);//sets pin 13 as the output (for red LED)
  pinMode(A1, INPUT);//sets A1 as the input to read the button
  pinMode(led, OUTPUT);//stes pin 9 as the output (for blue LED)

}

void loop() {//runs repeatedly 
  //push button
  int buttonState = digitalRead(A1);//reads high or low from A1 and stores it in buttonState

  
  if (buttonState == HIGH) {//checks if the button is pressed
    digitalWrite(13, HIGH);//turns red led on
  } else {//this will run if the button isnt pressed
    digitalWrite(13, LOW);//turns red led off
  }

  //potentiometer
  int potValue = analogRead(A2);//reads A2 from 0 to 1023 and stores it in potValue

  Serial.println(potValue);//prints potValue on a new line in the Serial Monitor

  analogWrite(led, potValue / 4);//divides potValue by 4 to get 0–255 and sets LED brightness on pin 9

  delay(30);//waits 30 seconds 
} 
