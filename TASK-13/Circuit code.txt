// C++ code
//
const int echoPin=10;
const int trigPin=9;
const int outPin=13;

float time;
float distance;
void setup()
{
  pinMode(trigPin,OUTPUT);//to define if it is output or input
  pinMode(echoPin,INPUT);
  pinMode(outPin,OUTPUT);
  Serial.begin(9600);//no clue about the number 9600
}

void loop(){
 
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);//this is just to like warm it up

  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);//Sending the pulse
  digitalWrite(trigPin,LOW);//then this is to lower it like low-high-low cycle
 
  time = pulseIn(echoPin,HIGH);//shows duration of pulse the low-high-low one
  distance= time*0.034/2;//speed of sound is 340m/s
  Serial.print("Distance: ");
  Serial.println(distance);
  if(distance<300){
  	digitalWrite(outPin,HIGH);
    delay(1000);
    digitalWrite(outPin,LOW);
    delay(1000);
  }
}