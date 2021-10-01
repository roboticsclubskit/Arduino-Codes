int ir1 = 10;
   
int ir3 = 12;
int LMP = 7;   
int LMN = 6;   
int RMN = 5;
int RMP = 4;   
int ir1v; 

int ir3v;
void setup()
{
pinMode(ir1,INPUT);

pinMode(ir3,INPUT);  
pinMode(LMP,OUTPUT);
pinMode(LMN,OUTPUT);
pinMode(RMP,OUTPUT);
pinMode(RMN,OUTPUT);
Serial.begin(9600);
}


void loop()
{
ir1v=digitalRead(ir1);

ir3v=digitalRead(ir3);
Serial.print(ir1v);Serial.print(ir3v);
if(ir1v==1  && ir3v==1)
 {     // move straight
digitalWrite(LMP,HIGH);
digitalWrite(LMN,LOW);
digitalWrite(RMP,HIGH);
digitalWrite(RMN,LOW);

}
else if(ir1v==1  && ir3v==0)
{     // turn right
digitalWrite(LMP,LOW);
digitalWrite(LMN,HIGH);
digitalWrite(RMP,HIGH);
digitalWrite(RMN,LOW);
}
else if(ir1v==0  && ir3v==1)
{     // turn left
digitalWrite(LMP,HIGH);
digitalWrite(LMN,LOW);
digitalWrite(RMP,LOW);
digitalWrite(RMN,HIGH);

}else if(ir1v==0  && ir3v==0)
{     // STRAIGHT
digitalWrite(LMP,HIGH);
digitalWrite(LMN,LOW);
digitalWrite(RMP,HIGH);
digitalWrite(RMN,LOW);
}}
