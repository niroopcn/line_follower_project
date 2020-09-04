int m1_in1a=2;
int m1_in1b=3;
int m2_in2a=4;
int m2_in2b=5;
int irsen_right=6;
int irsen_left=7;
int irright_state, irleft_state;
int state;
void setup()
{
pinMode(m1_in1a,OUTPUT);
pinMode(m1_in1b,OUTPUT);
pinMode(m2_in2a,OUTPUT);
pinMode(m2_in2b,OUTPUT);
pinMode(irsen_right,INPUT);
pinMode(irsen_left,INPUT);
}
void forward()
{
digitalWrite(m1_in1a, HIGH);
digitalWrite(m1_in1b,LOW);
digitalWrite(m2_in2a, HIGH);
digitalWrite(m2_in2b,LOW);
delay(2);
digitalWrite(m1_in1a,LOW);
digitalWrite(m1_in1b,LOW);
digitalWrite(m2_in2a,LOW);
digitalWrite(m2_in2b,LOW);
delay(8);
}
void right()
{
digitalWrite(m1_in1a,LOW);
digitalWrite(m1_in1b,LOW);
digitalWrite(m2_in2a, HIGH);
digitalWrite(m2_in2b,LOW);
delay(2);
digitalWrite(m1_in1a,LOW);
digitalWrite(m1_in1b,LOW);
digitalWrite(m2_in2a,LOW);
digitalWrite(m2_in2b,LOW);
delay(8);
}
void left()
{
digitalWrite(m1_in1a,HIGH);
digitalWrite(m1_in1b,LOW);
digitalWrite(m2_in2a,LOW);
digitalWrite(m2_in2b,LOW);
delay(2);
digitalWrite(m1_in1a,LOW);
digitalWrite(m1_in1b,LOW);
digitalWrite(m2_in2a,LOW);
digitalWrite(m2_in2b, LOW);
delay(8);
}
void stop( )
{
digitalWrite(m1_in1a,LOW);
digitalWrite(m1_in1b,LOW);
digitalWrite(m2_in2a,LOW);
digitalWrite(m2_in2b,LOW);
}
void loop()
{
irright_state = digitalRead(irsen_right);
irleft_state = digitalRead(irsen_left);
if (irright_state==LOW && irleft_state == LOW)
{
forward();
}
if (irright_state == LOW && irleft_state == HIGH)
{
left();
}
if (irright_state == HIGH && irleft_state == LOW)
{
right();
}
if (irright_state == HIGH && irleft_state == HIGH)
{
stop();
}