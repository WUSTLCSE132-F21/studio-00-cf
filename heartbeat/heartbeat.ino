/* heartbeat
 *
 * output 
 *
 */
int sec = 0; 
void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT); //output
}

void loop() {
  delay (1000);
  digitalWrite(13, HIGH);
  Serial.print(sec);
  Serial.println(" seconds have gone by");
  sec++;
  delay (1000);
  digitalWrite(13, LOW);
  Serial.println(millis());
  
}
