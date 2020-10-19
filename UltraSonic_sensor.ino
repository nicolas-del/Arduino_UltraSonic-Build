const int echo = 13;
const int trig = 12;

const int blue_led = 2;
const int green_led = 3;
const int yellow_led = 4;
const int red_led = 5;

int duration = 0;
int distance = 0;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(blue_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  pinMode(yellow_led, OUTPUT);
  pinMode(red_led, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trig, HIGH);
  delay(10);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);
  distance = (duration/2) / 28.5;
  Serial.println(distance);

  if(distance >= 0 && distance <= 15) //Activate the red led between these distance, else it won't activate
  {
    digitalWrite(red_led, HIGH);
  }
  else
  {
    digitalWrite(red_led, LOW);  
  }
  
  if(distance >= 16 && distance <= 30) //Activate the yellow led between these distance, else it won't activate
  {
    digitalWrite(yellow_led, HIGH);  
  }
  else
  {
    digitalWrite(yellow_led, LOW);
  }

  if(distance >= 31 && distance <= 45) //Activate the green led between these distance, else it won't activate
  {
    digitalWrite(green_led, HIGH);  
  }
  else
  {
    digitalWrite(green_led, LOW);
  }

  if(distance >= 46 && distance <= 100) //Activate the blue led between these distance, else it won't activate
  {
    digitalWrite(blue_led, HIGH);  
  }
  else
  {
    digitalWrite(blue_led, LOW);
  }
}
