int rosso1=13;
int giallo1=12;
int verde1=11;

int rosso2=10;
int giallo2=9;
int verde2=8;
void setup() {
  // put your setup code here, to run once:
pinMode(rosso1, OUTPUT);
pinMode(giallo1, OUTPUT);
pinMode(verde1, OUTPUT);
pinMode(rosso2, OUTPUT);
pinMode(giallo2, OUTPUT);
pinMode(verde2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(rosso1, HIGH);
digitalWrite(verde2, HIGH);
delay(2000);
digitalWrite(verde2, LOW);
delay(500);
digitalWrite(verde2, HIGH);
delay(500);
digitalWrite(verde2, LOW);
delay(500);
digitalWrite(verde2, HIGH);
delay(500);
digitalWrite(verde2, LOW);
delay(500);
digitalWrite(verde2, HIGH);
delay(500);
digitalWrite(verde2, LOW);
delay(500);
digitalWrite(verde2, HIGH);
delay(500);
digitalWrite(verde2, LOW);
delay(500);
digitalWrite(giallo1,HIGH);
digitalWrite(giallo2,HIGH);
delay(1000);
digitalWrite(rosso1, LOW);
digitalWrite(giallo1,LOW);
digitalWrite(giallo2,LOW);
digitalWrite(verde1,HIGH);
digitalWrite(rosso2,HIGH);
delay(2000);
digitalWrite(verde1, LOW);
delay(500);
digitalWrite(verde1, HIGH);
delay(500);
digitalWrite(verde1, LOW);
delay(500);
digitalWrite(verde1, HIGH);
delay(500);
digitalWrite(verde1, LOW);
delay(500);
digitalWrite(verde1, HIGH);
delay(500);
digitalWrite(verde1, LOW);
delay(500);
digitalWrite(verde1, HIGH);
delay(500);
digitalWrite(verde1, LOW);
delay(500);
digitalWrite(giallo2,HIGH);
digitalWrite(giallo1,HIGH);
delay(1000);
digitalWrite(rosso2, LOW);
digitalWrite(giallo2,LOW);
digitalWrite(giallo1,LOW);
digitalWrite(verde2,HIGH);
digitalWrite(rosso1,HIGH);
}
