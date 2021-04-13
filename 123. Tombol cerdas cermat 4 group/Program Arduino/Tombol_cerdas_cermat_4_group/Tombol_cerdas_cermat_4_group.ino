/*************************************
 * Program : Project 123. Tombol cerdas cermat 4 group
 * 125 Proyek Arduino Inkubatek
 * www.inkubator-teknologi.com
 * www.tokotronik.com
 * ***********************************/
const int tombolA = 2;
const int tombolB = 3;
const int tombolC = 4;
const int tombolD = 5;
const int lampuA = 8;
const int lampuB = 9;
const int lampuC = 10;
const int lampuD = 11;
const int bel = 12;

void setup(){
  for(char i=2; i<6; i++){
    pinMode(i, INPUT);
    digitalWrite(i,HIGH);
  }
  for(char i=8; i<13; i++){
    pinMode(i, OUTPUT);
    digitalWrite(i,LOW);
  }
}
void loop(){
  if(digitalRead(tombolA)==LOW){
    digitalWrite(bel,HIGH);
    digitalWrite(lampuA,HIGH);
    delay(500);
    while(!digitalRead(tombolA));
    digitalWrite(bel,LOW);
    digitalWrite(lampuA,LOW);
  }
  else if(digitalRead(tombolB)==LOW){
    digitalWrite(bel,HIGH);
    digitalWrite(lampuB,HIGH);
    delay(500);
    while(!digitalRead(tombolB));
    digitalWrite(bel,LOW);
    digitalWrite(lampuB,LOW);
  }
  else if(digitalRead(tombolC)==LOW){
    digitalWrite(bel,HIGH);
    digitalWrite(lampuC,HIGH);
    delay(500);
    while(!digitalRead(tombolC));
    digitalWrite(bel,LOW);
    digitalWrite(lampuC,LOW);
  }
  else if(digitalRead(tombolD)==LOW){
    digitalWrite(bel,HIGH);
    digitalWrite(lampuD,HIGH);
    delay(500);
    while(!digitalRead(tombolD));
    digitalWrite(bel,LOW);
    digitalWrite(lampuD,LOW);
  }
}
