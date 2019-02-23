int rosso1=13;
int giallo1=12;

int verde1=11;
int rosso2=10;
int giallo2=9;
int verde2=8;
int ciclo=0;
int giallo=0;
int nLampeggi=0;
int lampeggio=0;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(rosso1, OUTPUT);
pinMode(giallo1, OUTPUT);
pinMode(verde1, OUTPUT);
pinMode(rosso2, OUTPUT);
pinMode(giallo2, OUTPUT);
pinMode(verde2, OUTPUT);

//Chiedo quanto vuole durare il ciclo
Serial.println("Quanto vuoi che duri il ciclo");
while(Serial.available()==0) {} 
ciclo=Serial.readString().toInt();
Serial.println("Hai inserito"+ciclo);

//Chiedo quanto vuole durare il giallo
Serial.println("Quanto vuoi che duri il giallo");
while(Serial.available()==0) {} 
giallo=Serial.readString().toInt();
Serial.println("Hai inserito"+giallo);

//Chiedo quanto vuole durare il lampeggio
Serial.println("Quanto vuoi che duri il lampeggio del verde");
while(Serial.available()==0) {} 
lampeggio=Serial.readString().toInt();
Serial.println("Hai inserito"+lampeggio);

//Chiedo quanti lampeggi vuole
Serial.println("Quanti lampeggi vuoi");
while(Serial.available()==0) {}
nLampeggi=Serial.readString().toInt();
Serial.println("Hai inserito"+nLampeggi);

digitalWrite(rosso1, HIGH);
digitalWrite(verde2, HIGH);
delay((ciclo-(giallo+lampeggio*nLampeggi))/2);
for (int i;i<=nLampeggi;i++)
{
  digitalWrite(verde2,LOW);
  delay(lampeggio);
  digitalWrite(verde2,HIGH);
  delay(lampeggio);
}
digitalWrite(verde2,LOW);
digitalWrite(giallo1,HIGH);
digitalWrite(giallo2,HIGH);
delay(giallo);
digitalWrite(rosso1, LOW);
digitalWrite(giallo1,LOW);
digitalWrite(giallo2,LOW);
digitalWrite(verde1,HIGH);
digitalWrite(rosso2,HIGH);
delay((ciclo-(giallo+lampeggio*nLampeggi))/2);

digitalWrite(rosso2, HIGH);
digitalWrite(verde1, HIGH);
delay((ciclo-(giallo+lampeggio*nLampeggi))/2);
for (int i;i<=nLampeggi;i++)
{
  digitalWrite(verde1,LOW);
  delay(lampeggio);
  digitalWrite(verde1,HIGH);
  delay(lampeggio);
}
digitalWrite(verde1,LOW);
digitalWrite(giallo2,HIGH);
digitalWrite(giallo1,HIGH);
delay(giallo);
digitalWrite(rosso2, LOW);
digitalWrite(giallo2,LOW);
digitalWrite(giallo1,LOW);
digitalWrite(verde2,HIGH);
digitalWrite(rosso1,HIGH);
delay((ciclo-(giallo+lampeggio*nLampeggi))/2);
}
void loop() {
  // put your main code here, to run repeatedly:
}
