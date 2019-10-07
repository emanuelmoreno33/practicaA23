const int sensorPin = 9;
const int prender = 10;
int valoractual;
int valoranterior;
int espera = 2000;
int contador = 0;
 
void setup() {
  Serial.begin(9600);   //iniciar puerto serie
  pinMode(sensorPin , INPUT);  //definir pin como entrada
  pinMode(prender, OUTPUT);
}
 
void loop(){
  int value = 0;
  value = digitalRead(sensorPin );  //lectura digital de pin
  valoractual = value;
  if (valoractual == valoranterior)
  {
    contador++;
    if (contador == 6)
    {
      delay(espera);
      digitalWrite(prender,HIGH);
      delay(500);
      digitalWrite(prender,LOW);
      contador =0;
    }
    else
    {
      contador = 0;
    }
  }
}
