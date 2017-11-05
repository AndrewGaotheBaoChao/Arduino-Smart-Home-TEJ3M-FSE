//arduino uno bluetooth control leds in smart home
uint8_t led[4] = {5,6,7,8}; // pin for LED 1,2,3,4
char command1,command2;
String string;
  void setup()
  {
    Serial.begin(9600);
    for (int i=0; i<4; i++)
        pinMode(led[i], OUTPUT); //set all LED pin as OUTPUT
  }

  void loop()
  {
    if (Serial.available() > 1) //run if 1 bit or more data received
    {
    string = "";
        command1 = Serial.read();
        command2 = Serial.read();
        switchled(command1-'0',command2-'0');
    string = command1+command2;
    }
    delay(1);
  }
void switchled(char pinLED,char statusLED)
{
    if (statusLED == 0 || statusLED == 1)
    digitalWrite(led[pinLED-1],statusLED);
    else
    digitalWrite(led[pinLED-1],!digitalRead(led[pinLED-1]));

    Serial.print("LED "); 
    Serial.print(pinLED); 
    Serial.print(" = "); 
    Serial.print(digitalRead(pinLED)); 
}
