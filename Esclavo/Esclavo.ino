//CODIGO ESCLAVO CONTROLADOR 2 (ARDUINO MEGA)
int led = 21;
String d;
int inc = 0;
int bandera = 0;
int COHETE1 = 9;
int COHETE2 = 8;
int COHETE3 = 7;
          //int c = 0;
long valor0,valor1,valor2,valor3,valor4,valor5,valor6 = 0;
long valor7,valor8,valor9,valor10,valor11,valor12,valor13 = 0;
long p = 0;
long q = 0;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  digitalWrite(led,LOW);

  pinMode (COHETE1,INPUT);
  pinMode (COHETE2,INPUT);
  pinMode (COHETE3,INPUT);
}

void loop() {
  if (Serial.available()>0)
    {
    inc = Serial.read();
    }
  if (inc == '1')
    bandera = 1;
  if (inc == '2')
    bandera = 2;

 switch (bandera){
  case 1:
  envio();
  break;

  case 2:
  recepcion();
  break;
 }
}

void envio(){
  digitalWrite(led,HIGH);
  valor1=digitalRead(COHETE1);
  valor2=digitalRead(COHETE2);
  valor3=digitalRead(COHETE3);
  long y=7;
  long z=7;
  long a= 1;
  long b= 1;
  long c= 1;
  long d= 1;
  long e= 1;
  long f= 1;
  long g= 1;
  long h= 1;
  long i= 1;
  valor0 = y*1000000; 
  valor1 = (valor1*100000) + 100000;
  valor2 = (valor2*10000) + 10000;
  valor3 = (valor3*1000) + 1000;
  valor4 = (a*100) + 100;
  valor5 = (b*10) + 10;
  valor6 = (c*1) + 1;
  valor7 = z*1000000; 
  valor8 = (d*100000) + 100000;
  valor9 = (e*10000)+ 10000;
  valor10 = (f*1000) + 1000;
  valor11 = (g*100) + 100;
  valor12 = (h*10) + 10;
  valor13 = (i*1) + 1;
  p = valor0 + valor1 + valor2 + valor3 + valor4 + valor5 + valor6;
  q = valor7 + valor8 + valor9 + valor10 + valor11 + valor12 + valor13;

  //d = String (c);
      Serial.print("%");
      Serial.print(p);
      Serial.print(q);
      Serial.print("/");
  delay(200);
  bandera = 0;    
  inc = 0;
}

void recepcion(){

}
