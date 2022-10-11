/* Written and Edited by Deniz Karakay
 * 10.12.2016
 */

int pinR = 9;  //Red
int pinG = 11; //Green
int pinB = 10; //Blue
int threshold = 150; //Change This
int volume;
char state;
int color = 0;
int randomSelect;
int red, green, blue;
void setup() {
  Serial.begin(9600);
  pinMode(pinR,OUTPUT);
  pinMode(pinG,OUTPUT);
  pinMode(pinB,OUTPUT);   
 
}

void loop() {
    Led();
   if(Serial.available() > 0){     
      state = Serial.read();   
    }
     volume = analogRead(A0); // You connect your sound sensor A0 for example
   
  //I use with bluetooth sensor HC-06
  if(state == 'Q'){
  ColorAll(1000);
  }
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
  }else if(state == 'X'){
  if(color == 0){
  ColorAll(250);
  } 
  analogWrite(pinR,0);
  analogWrite(pinG,0);
  analogWrite(pinB,0);  
  color = 1;
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
  
  }else if(state == 'D'){// For Disco mode I mean Music Mode
    Serial.println(volume);
  if(volume >= threshold){    
    switch(randomSelect){
    case 0:
      analogWrite(pinR,255);
      analogWrite(pinG,0);
      analogWrite(pinB,0);
    break;
    case 1:
      analogWrite(pinR,255);
      analogWrite(pinG,128);
      analogWrite(pinB,0);
    break;
    case 2:
      analogWrite(pinR,0);
      analogWrite(pinG,255);
      analogWrite(pinB,0);
    break;
    case 3:
      analogWrite(pinR,0);
      analogWrite(pinG,128);
      analogWrite(pinB,255);
    break;
    case 4:
      analogWrite(pinR,0);
      analogWrite(pinG,0);
      analogWrite(pinB,255);
    break;
    case 5:
      analogWrite(pinR,255);
      analogWrite(pinG,0);
      analogWrite(pinB,127);
    break;
    default:
      analogWrite(pinR,0);
      analogWrite(pinG,255);
      analogWrite(pinB,0);
      break;
    }
    /*red = random(0,255);  
    blue = random(0,255);  
    green = random(0,255);
    analogWrite(pinR,red);
    analogWrite(pinG,blue);
    analogWrite(pinB,green);*/
   }else{
    analogWrite(pinR,0);
    analogWrite(pinG,0);
    analogWrite(pinB,0);
}
  }
 
  
  
}
void ColorAll(int timeD){
  analogWrite(pinR,255);
  analogWrite(pinG,0);
  analogWrite(pinB,0);
  delay(timeD);
  analogWrite(pinR,255);
  analogWrite(pinG,128);
  analogWrite(pinB,0);
  delay(timeD);
/*  analogWrite(pinR,255);
  analogWrite(pinG,255);
  analogWrite(pinB,0);
  delay(1000);*/
 /* analogWrite(pinR,128);
  analogWrite(pinG,255);
  analogWrite(pinB,0);
  delay(1000);*/
  analogWrite(pinR,0);
  analogWrite(pinG,255);
  analogWrite(pinB,0);
  delay(timeD);
  /*analogWrite(pinR,0);
  analogWrite(pinG,255);
  analogWrite(pinB,128);
  delay(1000);*/
 /* analogWrite(pinR,0);
  analogWrite(pinG,255);
  analogWrite(pinB,255);
  delay(1000);*/
  analogWrite(pinR,0);
  analogWrite(pinG,128);
  analogWrite(pinB,255);
  delay(timeD);
  analogWrite(pinR,0);
  analogWrite(pinG,0);
  analogWrite(pinB,255);
  delay(timeD);
  /*analogWrite(pinR,127);
  analogWrite(pinG,0);  
  analogWrite(pinB,255);*/
//  delay(1000);
  /*analogWrite(pinR,255);
  analogWrite(pinG,0);
  analogWrite(pinB,255);*/
 // delay(1000);
  analogWrite(pinR,255);
  analogWrite(pinG,0);
  analogWrite(pinB,127);
  delay(timeD);
  analogWrite(pinR,128);
  analogWrite(pinG,128);
  analogWrite(pinB,128);
  delay(timeD);
  color = 0;
}
void Led(){
  randomSelect = random(0,5);
     //delay(5000);
}



