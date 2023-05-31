// setup pin connections
int buzzer = 13;
 
void setup() {
 pinMode(5, OUTPUT);
 pinMode(6, INPUT);
 Serial.begin(9600);
}
 
void loop() {
 digitalWrite(5, LOW);
 delayMicroseconds(4);
 digitalWrite(5, HIGH);
 delayMicroseconds(10);
 digitalWrite(5, LOW);
 
 long time = pulseIn(6,HIGH);
 
 long cm = time / 29 / 2;
 String CM = "CM"; 
 
 //send variable frequency based on distance
 int sound = (-4)*cm + 600;
 
 if (cm < 100) {

 

  //buzz the piezo with a 50ms interval in between each buzz
  tone(buzzer, sound);
  delay(50);   
  noTone(buzzer); 
  delay(50); 
 }
 

 //print testing code
 else{
 noTone(buzzer);
 delay(100);
 }
 