/* Written and Edited by Deniz Karakay
 * 16.03.2020
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
      red = random(250);  
      blue = random(250);  
      green = random(250);   
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
  
  }else if(state == 'R'){// For Random
  analogWrite(pinR,red);
  analogWrite(pinG,blue);
  analogWrite(pinB,green);
  Serial.println(red);
  delay(500);
  Serial.println(red);

  }else if(state == 'Q'){ // For Random
  analogWrite(pinR,255);
  analogWrite(pinG,0);
  analogWrite(pinB,0);
  delay(1000);
  
  analogWrite(pinR,255);
  analogWrite(pinG,127);
  analogWrite(pinB,0);
  delay(1000);

  analogWrite(pinR,255);
  analogWrite(pinG,255);
  analogWrite(pinB,0);
  delay(1000);

  analogWrite(pinR,0);
  analogWrite(pinG,255);
  analogWrite(pinB,0);
  delay(1000);

  
  analogWrite(pinR,0);
  analogWrite(pinG,0);
  analogWrite(pinB,255);
  delay(1000);

  
  analogWrite(pinR,75);
  analogWrite(pinG,0);
  analogWrite(pinB,130);
  delay(1000);

  
  analogWrite(pinR,148);
  analogWrite(pinG,0);
  analogWrite(pinB,211);
  delay(1000);

  
  analogWrite(pinR,255);
  analogWrite(pinG,255);
  analogWrite(pinB,255);
  delay(2500);

  }else if(state == 'C'){// For Close
  analogWrite(pinR,0);
  analogWrite(pinG,0);
  analogWrite(pinB,0);  
  }

 
    delay(10);

  
}
