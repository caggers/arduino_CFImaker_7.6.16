int redPin = 11;
int greenPin = 10;
int bluePin = 9;

int r, g, b;

#define fade 10

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  //debug:
  //Serial.begin(9600);

}

void loop() {
  
//  changeColour(255, 255, 255);
//  delay(100);
  
  // fade from blue to violet
  for (r = 0; r < 256; r++) { 
    analogWrite(redPin, r);
    delay(fade);
  } 
  // fade from violet to red
  for (b = 255; b > 0; b--) { 
    analogWrite(bluePin, b);
    delay(fade);
  } 
  // fade from red to yellow
  for (g = 0; g < 256; g++) { 
    analogWrite(greenPin, g);
    delay(fade);
  } 
  // fade from yellow to green
  for (r = 255; r > 0; r--) { 
    analogWrite(redPin, r);
    delay(fade);
  } 
  // fade from green to teal
  for (b = 0; b < 256; b++) { 
    analogWrite(bluePin, b);
    delay(fade);
  } 
  // fade from teal to blue
  for (g = 255; g > 0; g--) { 
    analogWrite(greenPin, g);
    delay(fade);
  }
}
 

void changeColour( int r, int g, int b) {
  analogWrite(redPin, r);
  analogWrite(greenPin, g);
  analogWrite(bluePin, b); 

}



