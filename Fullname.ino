const int a = 13;
const int b = 12;
const int c = 11;
const int d = 10;
const int e = 9;
const int f = 8;
const int g = 7;
const int decimal = 6;

void setup()
{
  Serial.begin(9600);
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(decimal,OUTPUT);
}

void loop()
{
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(decimal, HIGH);

 delay(1000);

  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
 
delay(1000);

 
  digitalWrite(d, LOW);
  digitalWrite(f, LOW);

delay(1000);
  digitalWrite(e, LOW);
  digitalWrite(decimal, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(g, HIGH);

delay(1000);
  digitalWrite(d, LOW);
  digitalWrite(g, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);

delay(1000);

  digitalWrite(d, LOW);
  digitalWrite(g, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);

delay(1000);

  digitalWrite(c, LOW);
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(decimal, HIGH);
 
delay(1000); 
  digitalWrite(f, LOW);
  digitalWrite(b, LOW);
  digitalWrite(decimal, LOW);
  digitalWrite(g, HIGH);
  
  


delay(1000);

  digitalWrite(g, LOW);
  digitalWrite(c, LOW);
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(decimal, HIGH);
  digitalWrite(f, HIGH);
  
 
delay(1000);
digitalWrite(decimal, LOW);
digitalWrite(b, LOW);
digitalWrite(e, HIGH);
digitalWrite(f, HIGH);
digitalWrite(d, HIGH);
digitalWrite(c, HIGH);
digitalWrite(g, HIGH);

delay(1000);

digitalWrite(d, LOW);
digitalWrite(f, LOW);
digitalWrite(c, HIGH);
digitalWrite(g, HIGH);
digitalWrite(b, HIGH);
digitalWrite(e, HIGH);
digitalWrite(decimal, HIGH);

delay(1000);

digitalWrite(g, LOW);
  digitalWrite(c, LOW);
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(decimal, HIGH);
  digitalWrite(f, HIGH);

delay(1000);

  digitalWrite(f, LOW);
  digitalWrite(e, LOW);
  digitalWrite(g, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(decimal, HIGH);
  digitalWrite(c, HIGH);


delay(1000);
  

}

