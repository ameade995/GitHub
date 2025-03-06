
const int trigPin = 6;  
const int echoPin = 7;

float duration, distance;
void setup() {  
	pinMode(trigPin, OUTPUT);  
	pinMode(echoPin, INPUT);  
	Serial.begin(9600);  
}  
void loop() {  
	digitalWrite(trigPin, LOW);  
	delayMicroseconds(2);  
	digitalWrite(trigPin, HIGH);  
	delayMicroseconds(10);  
	digitalWrite(trigPin, LOW); 
duration = pulseIn(echoPin, HIGH); 
distance = (duration*.0343)/2; 
Serial.print("Distance: ");  
	Serial.println(distance);  
	delay(100);  
}  
const int PWMB = 10; //speed control pin on the motor driver for the left motor
const int BIN2 = 9; //control pin 2 on the motor driver for the left motor
const int BIN1 = 8; //control pin 1 on the motor driver for the left motor
const int PWMB = 10; //speed control pin on the motor driver for the left motor
const int BIN2 = 9; //control pin 2 on the motor driver for the left motor
const int BIN1 = 8; //control pin 1 on the motor driver for the left motor