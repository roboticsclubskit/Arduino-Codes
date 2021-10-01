int ir1 = 10;
int ir2 = 11;   
int ir3 = 12;
int ir4 = 9;
int ir5 = 8;
int LMP = 7;   
int LMN = 6;   
int RMP = 5;   
int RMN = 4;
int LED = 13;         
int ir1v;
int ir2v;
int ir3v;
int ir4v;
int ir5v;
void setup()
{
pinMode(ir1,INPUT);
pinMode(ir2,INPUT);
pinMode(ir3,INPUT);
pinMode(ir4,INPUT);
pinMode(ir5,INPUT);  
pinMode(LMP,OUTPUT);
pinMode(LMN,OUTPUT);
pinMode(RMP,OUTPUT);
pinMode(RMN,OUTPUT);
pinMode(LED,OUTPUT);
}
void loop()
{
ir1v=digitalRead(ir1);
ir2v=digitalRead(ir2);
ir3v=digitalRead(ir3);
ir4v=digitalRead(ir4);
ir5v=digitalRead(ir5);
if(ir1v==0 && ir2v==1 && ir3v==0)
{     // move straight
digitalWrite(LMP,HIGH);
digitalWrite(LMN,LOW);
digitalWrite(RMP,HIGH);
digitalWrite(RMN,LOW);
digitalWrite(LED,LOW);
}
else if(ir1v==0 && ir2v==1 && ir3v==1)
{     // turn right
digitalWrite(LMP,HIGH);
digitalWrite(LMN,LOW);
digitalWrite(RMP,LOW);
digitalWrite(LED,LOW);
digitalWrite(RMN,HIGH);
}
else if(ir1v==1 && ir2v==1 && ir3v==0)
{     // turn left
digitalWrite(LMP,LOW);
digitalWrite(LMN,LOW);
digitalWrite(RMP,HIGH);
digitalWrite(RMN,LOW);
digitalWrite(LED,LOW);
}

else if(ir1v==1 && ir2v==1 && ir3v==1)
{           // T-POINT
digitalWrite(LMP,LOW);
digitalWrite(LMN,LOW);
digitalWrite(RMP,HIGH);
digitalWrite(RMN,LOW);
digitalWrite(LED,LOW);  
}
else if(ir1v==1 && ir2v==1 && ir3v==1 && ir4v==1 && ir5v==1)
{                // BOX STOP
digitalWrite(LMP,LOW);
digitalWrite(LMN,LOW);
digitalWrite(RMP,LOW);
digitalWrite(RMN,LOW);
digitalWrite(LED,HIGH);
}
else  if(ir1v==0 && ir2v==0 && ir3v==0)
{                // U-TURN
digitalWrite(LMP,LOW);
digitalWrite(LMN,HIGH);
digitalWrite(RMP,HIGH);
digitalWrite(RMN,LOW);
digitalWrite(LED,LOW);
}
}
