// constants won't change
const int RELAY_1 = 3;  // the Arduino pin, which connects to the IN pin of relay
const int RELAY_2 = 5;  // the Arduino pin, which connects to the IN pin of relay
const int RELAY_3 = 7;  // the Arduino pin, which connects to the IN pin of relay
const int BALLOON = 9;  // the Arduino pin, which connects to the IN pin of relay
const int inputPin = 4;     // Digital pin 4 to read input

void balloonGun(bool robotRead){
  if (robotRead == 0){
    digitalWrite(RELAY_1, HIGH); 
    digitalWrite(RELAY_2, HIGH); 
    digitalWrite(RELAY_3, HIGH);
    digitalWrite(BALLOON, LOW); 

    delay(10000);
    
    digitalWrite(BALLOON, HIGH);

    digitalWrite(RELAY_1, LOW);  
    digitalWrite(RELAY_2, LOW);  
    digitalWrite(RELAY_3, LOW);
    delay(3000);
  }else{
    digitalWrite(RELAY_1, LOW); 
    digitalWrite(RELAY_2, LOW); 
    digitalWrite(RELAY_3, LOW);
    digitalWrite(BALLOON, HIGH);
    

  }
}

void setup() {
  // put your setup code here, to run once:
  // initialize digital pin as an output.
  Serial.begin(9600);
  pinMode(RELAY_1, OUTPUT);
  pinMode(RELAY_2, OUTPUT);
  pinMode(RELAY_3, OUTPUT);
  pinMode(BALLOON, OUTPUT);

  pinMode(inputPin, INPUT);       // Set pin 4 as input
}

void loop() {
  // put your main code here, to run repeatedly:
  //bool robotRead = digitalRead(inputPin);
  //Serial.println(robotRead);
  balloonGun(false);
  delay(10000);
  ballnoonGun(true);
  delay(10000);
}
