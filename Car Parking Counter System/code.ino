#include <LiquidCrystal.h> // including library for LCD Display
#define MAX_DISTANCE 200 // Max Distance In Cm
const int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8; 
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
const int trigPin = 7;
const int echoPin = 6;
const int trigPin1 = 4;
const int echoPin1 = 5;
long duration1=0;
float distance1=0;
long duration=0;
float distance=0;
int cin=0,cout=0;
void setup(){
  Serial.begin(9600);
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT);
pinMode(trigPin1, OUTPUT); 
pinMode(echoPin1, INPUT);
 lcd.begin(16, 2);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  lcd.clear();
  lcd.print("hii");
}
void loop(){
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration * 0.034)/2;
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
  duration1 = pulseIn(echoPin1, HIGH);
  distance1 = (duration1 * 0.034)/2;
   if(distance<=12)//12 cm
  {cin++;
  cout++;}
  if(distance1<=12){//12 cm
    cout--;
  }
  	lcd.clear();
   lcd.print("Total car parked=");//Using This line of code we will print data on LCD 
   delay(500);
   lcd.clear();
    lcd.print(cin);
    delay(1000);
    lcd.clear();
    lcd.print("presently parked car's=");
   delay(500);
   lcd.clear();
   lcd.print(cout);
   delay(1000);
   lcd.clear();
   
   Serial.print("total car parked in the parking =");
  Serial.println(cin);
  delay(1000);
  Serial.print("presently parked car in the parking are =");
  Serial.println(cout);
  delay(1000);

}
