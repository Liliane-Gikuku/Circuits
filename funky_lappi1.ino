// C++ code
//
void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop(){
  digitalWrite(1, HIGH);
  delay(200); // Wait for 200 millisecond(s)
  digitalWrite(1, LOW);
  delay(200); // Wait for 200 millisecond(s)

 digitalWrite(2, HIGH);
  delay(5); // Wait for 5 millisecond(s)
  digitalWrite(2, LOW);
  delay(5); // Wait for 5 millisecond(s)
}
