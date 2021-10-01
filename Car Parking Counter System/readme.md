<h1 align="center"> Car Parking Counter System</h1>

**Circuit Daigram**
<br>
<img alt="HF2021" src="https://github.com/shubham9672/Arduino-Codes/blob/main/Car%20Parking%20Counter%20System/circuit.png">

### :octocat: Steps of connection
### Step #1: Connect Arduino 5v pin and GND pin with Breadboard + and – pin as shown in above picture.
### Step #2: Now connect potentiometer on breadboard and connect power pin of potentiometer with breadboard +ve pin of breadboard and Ground with ground of breadboard.
### Step #3: Now connect LCD Vss pin wit ground of breadboard and VDD with +ve of breadboard.
### Step #4: Now connect VE pin of LCD with input pin of Potentiometer and RW with ground of breadboard.
### Step #5: Now connect RS pin of LCD with 13 pin of Arduino Uno R3 and Enable(E) pin of LCD with Arduino Uno pin 12 Shown in above diagram RS pin wire with orange color and Enable pin wire with yellow color.
### Step #6: Now connect data pins of LCD from pin d4 to d7 with Arduino Uno pin 11 to 8 Respectively(connect d4 with 11 and then go one according to pins).
### Step #7: Connect LCD pin Led Anode with 220ohm resistance then connect this resistance with +ve pin of breadboard and connect LCD pin Led Cathode with ground of breadboard.
### Step #8: Now Place ultrasonic sensor at the entry gate of paring area so that you can get reading now connect Vcc and ground of this sensor to +ve and ground of breadboard respectively after it now connect echo pin of sensor to pin no. 6 of Arduino Uno and trigger pin of sensor to pin no. 7 of Arduino Uno (I use grey wire for trigger and white for echo).
### Step #9: Now Place another ultrasonic sensor at the exit gate of paring area so that you can get reading now connect Vcc and ground of this sensor to 5 volt and ground of Arduino Uno respectively after it now connect echo pin of sensor to pin no. 5 of Arduino Uno and trigger pin of sensor to pin no. 4 of Arduino Uno (I have used grey wire for trigger and white for echo).

**Please don’t connect battery with before uploading or while uploading code in Arduino Uno R3**
### 💻 Now upload code to Arduino uno board using Arduino IDE
### :octocat: Final Steps
Now you are few steps away from your project so follow some the steps below to  complete the project:
### Step #1: Now connect + ve of 9 volt battery to pin 1 (Input)  of 7805 ic .
### Step #2: Now connect – ve of 9 volt battery to pin 2(Ground)  of 7805 ic .
### Step #3: Now connect  pin 3(Output)  of 7805 ic to pin Vin of Arduino Uno R3 .
### Step #4: Now connect  pin 2 (Ground)  of 7805 ic to pin Gnd of Arduino Uno R3 .

**If you want to add a Switch then connect it in between the battery and 7805 IC then connect +ve of battery to one pin of switch and connect second pin of switch to pin 1 of 7805 IC.**

