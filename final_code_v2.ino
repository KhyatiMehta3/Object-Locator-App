char data;
int i=0;

void setup() {
  // put your setup code here, to run once:
 
  Serial.begin(4800);
  pinMode(3,OUTPUT);
  pinMode(LED_BUILTIN,OUTPUT);
 
  }
void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available())
  {
   data=Serial.read();
   if(data=='A') 
    {
     Serial.write("Finding..\n");
     while(i!=1){
       digitalWrite(3,HIGH);
       digitalWrite(LED_BUILTIN,HIGH);
       delay(1000);
       digitalWrite(3,LOW);
       digitalWrite(LED_BUILTIN,LOW);
       delay(1000);
       data=Serial.read();
       if(data=='B')
        {
          i = 1;
          digitalWrite(3,LOW);
          Serial.write("\nFound!\n");
          digitalWrite(LED_BUILTIN,LOW);
    } 
     } i=0;
    }
   
     
     }
  }
