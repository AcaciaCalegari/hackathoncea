// HackathonWearC&A
// Autora : Acacia Calegari
//Programa q captaLuz com LDR


const int analogPin = 2; //aki q recebe os dados p leitura eh o pin 2 do analogico

int val = 0; //retorna o valor inteiro da variavel

void setup(){
  Serial.begin(9600); // aki eh a comunicacao serial, tipo zigbee,bluetooth,etc...

}

void loop(){ //aki eh o looping do bglh, q repete em milisegundo
  val = analogRead(analogPin); //valor inteiro da variavel sendo processado/lido analogicamente pelo pino analog
  Serial.println(val); //imprime o valor serial na tela de comando da ide p seligar na funcionalidade
  delay(1000); //isso ate parece mt tmp, mas na real eh so o tmp em mili segundo

}
