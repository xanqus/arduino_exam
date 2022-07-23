int interruptPin1 = 2;
int green = 8;
int red = 9;
int yellow = 10;
int red2 = 11;
boolean state1 = false;

void setup() {
  Serial.begin(9600);
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(interruptPin1, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin1), exchange1, FALLING
  );
}

// the loop function runs over and over again forever
void loop() {
  
    Serial.println(state1);
    digitalWrite(green, HIGH);
    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
    delay(1000);
    digitalWrite(green, LOW);
    digitalWrite(red, HIGH);
    digitalWrite(yellow, LOW);
    delay(1000);
    digitalWrite(green, LOW);
    digitalWrite(red, LOW);
    digitalWrite(yellow, HIGH);
    delay(1000);
 
}
 
void exchange1() {
  if(state1 == true) {
    digitalWrite(red2, HIGH);
    state1 = false;
  } else {
    digitalWrite(red2, LOW);
    state1 = true;
  }
}
