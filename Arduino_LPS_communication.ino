

String inByte;//67
String range_str;
int i = 0;
float range_int;
void setup() {
  // initialize both serial ports:
  Serial.begin(115200);
  Serial1.begin(115200);
  
}

void loop() {
  // read from port 1, send to port 0:
  while(Serial1.available()) {

    inByte = Serial1.readStringUntil('\n');
    Serial.println(inByte);
    range_str = inByte.substring(4,12);
    range_int = range_str.toInt();
    Serial.println(range_str);
    Serial.println(range_int);

    
    
//    Serial.println(inByte.substring(16,23));
//    Serial.println(inByte.substring(25,32));
    //delay(2000);
  }

}
