#define Pot A0
#define Button 6


void setup() {
pinMode(Pot, INPUT);
pinMode(Button, INPUT);
Serial.begin(9600);
Serial.println("This is two sensor integration");
}

void loop() {
 bool buttonData=0;
 int potData=0;
 buttonData=digitalRead(Button);
 potData=analogRead(Pot);
Serial.print("Pot Data:");
Serial.print(potData);
Serial.print("\t Button State:");
Serial.println(buttonData);
delay(1000);
}
