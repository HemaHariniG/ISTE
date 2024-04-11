// https://www.tinkercad.com/things/9wSe0tVqw05?sharecode=6dq48fsUr--w0_P7prgTaA8hKFh8Z1U87ck-JM2BNbY //

int speed = 0;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  speed = 1800;
  digitalWrite(13, HIGH);
  delay(speed);
  digitalWrite(13, LOW);
  delay(speed);
  digitalWrite(12, HIGH);
  delay(speed);
  digitalWrite(12, LOW);
  delay(speed);
  digitalWrite(11, HIGH);
  delay(speed);
  digitalWrite(11,LOW);
  delay(speed);
}
