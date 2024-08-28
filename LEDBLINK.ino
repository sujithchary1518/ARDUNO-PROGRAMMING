int led = 13; //led pin
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led,HIGH); // led is in on
delay(1000); // delay for 1 second
digitalWrite(led,LOW); //led is in off
delay(1000);//delay for 1 second
}
