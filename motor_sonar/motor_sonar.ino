#define trigPin2 A0
#define echoPin2 A1
#define motor1 5
#define ledpin 13
long duration;
int distance;
void setup() {
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(motor1, OUTPUT);

}

void loop() {
  digitalWrite(trigPin2, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin2, LOW);
  duration = pulseIn(echoPin2, HIGH);
  distance = (duration/2) / 29.1;

if (distance <=5)

{
digitalWrite(motor1,HIGH);
digitalWrite(ledpin,HIGH);
} else
{
digitalWrite(motor1,LOW);
digitalWrite(ledpin,LOW);
}
}
