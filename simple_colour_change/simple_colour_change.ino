int redPin = 11;
int greenPin = 10;
int bluePin = 9;

int R, G, B;

#define delaySpeed 1000

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT); 
}

void loop() {
  changeColor(255, 255, 255); //write white
  delay(delaySpeed);
  changeColor(255, 0, 0); //RED
  delay(delaySpeed);
  changeColor(0, 255, 0); //GREEN
  delay(delaySpeed);
  changeColor(0, 0, 255); //BLUE
  delay(delaySpeed);
  changeColor(255, 255, 0); //YELLOW
  delay(delaySpeed);
  changeColor(255, 0, 255); //PURPLE
  delay(delaySpeed);
  changeColor(0, 255, 255); //TEAL
  delay(delaySpeed);
}

void changeColor(int R, int G, int B) { 

  analogWrite(redPin, R);
  analogWrite(greenPin, G);
  analogWrite(bluePin, B); 
}


