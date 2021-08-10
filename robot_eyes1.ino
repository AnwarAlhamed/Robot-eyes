
void setup()
{
  pinMode(6, OUTPUT);
}

void loop()
{
  digitalWrite(6, HIGH);
  delay(50); // Wait for 50 milliseconds
  digitalWrite(6, LOW);
  delay(50); // Wait for 1000 milliseconds
}