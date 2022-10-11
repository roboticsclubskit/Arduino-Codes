/* Written and Edited by Deniz Karakay
 * 10.12.2016
 */

int pinR = 9;  //Red
int pinG = 11; //Green
int pinB = 10; //Blue
int threshold = 300; //Change This
int volume;
char state;
int red, green, blue;
void setup() {
  Serial.begin(9600);
  pinMode(pinR,OUTPUT);
  pinMode(pinG,OUTPUT);
  pinMode(pinB,OUTPUT);   
 
}

void loop() {
   if(Serial.available() > 0){     
      state = Serial.read();   
    }
     volume = analogRead(A0);
   //Debug
  

  if(state == 'B'){ // For White
  analogWrite(pinR,250);
  analogWrite(pinG,250);
  analogWrite(pinB,250);
  }else if(state == 'M'){
  analogWrite(pinR,0);
  analogWrite(pinG,0);
  analogWrite(pinB,250);
  
  }else if(state == 'Y'){ //For Blue
  analogWrite(pinR,0);
  analogWrite(pinG,250);
  analogWrite(pinB,0);
  
  }else if(state == 'K'){ // For Red
  analogWrite(pinR,250);
  analogWrite(pinG,0);
  analogWrite(pinB,0);
  
  }else if(state == 'R'){ // For Random
  red = random(0,250);  
  blue = random(0,250);  
  green = random(0,250);
  analogWrite(pinR,red);
  analogWrite(pinG,blue);
  analogWrite(pinB,green);
  delay(1000);
  
  }else if(state == 'C'){// For Close
  analogWrite(pinR,0);
  analogWrite(pinG,0);
  analogWrite(pinB,0);  
  

  }
  
  
}


