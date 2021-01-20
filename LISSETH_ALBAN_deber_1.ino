void setup() {
  // put your setup code here, to run once:

}
define pinLED1 8
#define pinLED2 9
#define pinLED3 10
#define pinLED4 11
#define pinLED5 12
#define pinLED6 13

void setup() {

 pinMode(pinLED1, OUTPUT);  
 pinMode(pinLED2, OUTPUT);  
 pinMode(pinLED3, OUTPUT);  
 pinMode(pinLED4, OUTPUT);  
 pinMode(pinLED5, OUTPUT);  
 pinMode(pinLED6, OUTPUT); 

}

void loop() {
  int i=0;
digitalWrite(pinLED1, LOW); // apaga
digitalWrite(pinLED2, LOW); // apaga  
digitalWrite(pinLED3, LOW); // apaga  
digitalWrite(pinLED4, LOW); // apaga  
digitalWrite(pinLED5, LOW); // apaga  
digitalWrite(pinLED6, LOW); // apaga  

boolean boton1=digitalRead(1);
boolean boton2=digitalRead(2);
boolean boton3=digitalRead(3);
boolean boton4=digitalRead(4);
if (boton1==0 && boton2==0 && boton3==0 && boton4==1){
  for(  i=0; i<10;i++){
  
 digitalWrite(pinLED2, HIGH); // enciende
 digitalWrite(pinLED4, HIGH); // Enciende 
 digitalWrite(pinLED6, HIGH); // Enciende
 delay(500);
 digitalWrite(pinLED2, LOW); // 
 digitalWrite(pinLED4, LOW); //
 digitalWrite(pinLED6, LOW); // 
 }}else if (boton1==0 && boton2==0 && boton3==1 && boton4==0){
     for( int i=0; i<10;i++){
  
 digitalWrite(pinLED1, HIGH); // enciende
 digitalWrite(pinLED3, HIGH); // Enciende 
 digitalWrite(pinLED5, HIGH); // Enciende
 delay(500);
void loop() {
  // put your main code here, to run repeatedly:

}
