char r;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_BUILTIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  r=Serial.read();
  //Serial.println(r);
  if(r=='1')
  {
    digitalWrite(LED_BUILTIN,HIGH);
    Serial.println("on");
    r=' ';
    delay(10);
  }
  else
  {
    digitalWrite(LED_BUILTIN,LOW);
  }

}
