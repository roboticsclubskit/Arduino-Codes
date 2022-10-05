int LMP = 5;   
int LMN = 6;   
int RMN = 10;
int RMP = 11;
void setup()
{
Serial.begin(9600);  
pinMode(LMP,OUTPUT);
pinMode(LMN,OUTPUT);
pinMode(RMP,OUTPUT);
pinMode(RMN,OUTPUT);
}
void loop()
{
    int data= Serial.read();

if(data=='F')
{     // move straight
digitalWrite(LMP,HIGH);
digitalWrite(LMN,LOW);
digitalWrite(RMP,HIGH);
digitalWrite(RMN,LOW);
}
else if(data=='R')
{     // turn right
digitalWrite(LMP,HIGH);
digitalWrite(LMN,LOW);
digitalWrite(RMP,LOW);
digitalWrite(RMN,HIGH);
}
else if(data=='L')
{     // turn left
digitalWrite(LMP,LOW);
digitalWrite(LMN,HIGH);
digitalWrite(RMP,HIGH);
digitalWrite(RMN,LOW);
}

else if(data=='B')
{           // BACK
digitalWrite(LMP,LOW);
digitalWrite(LMN,HIGH);
digitalWrite(RMN,HIGH);
digitalWrite(RMP,LOW);  
}
else if(data=='S')
{                // BOX STOP
digitalWrite(LMP,LOW);
digitalWrite(LMN,LOW);
digitalWrite(RMP,LOW);
digitalWrite(RMN,LOW);
}
}
