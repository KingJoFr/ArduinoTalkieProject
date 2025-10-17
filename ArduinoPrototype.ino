
long duration;
int distance;
const int trigPin = 10;
const int echoPin = 11;
const int speakerPin = 6;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(500);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034/2;
  if(distance >=1 && distance < 45 ){
    tone(speakerPin, 523.25);
    delay(200);
    tone(speakerPin, 440 );
    
    delay(200);
    noTone(speakerPin);

  }
  


  Serial.print("Distance: ");
  Serial.println(distance);
  delay(1000);

}
