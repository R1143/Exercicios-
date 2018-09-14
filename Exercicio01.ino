
/*
  Exercicio 01
  IOT na prática com o ESP8266
*/


// Definições dos pinos de Entrada e Saída
const int buttonPinOff = D1;     // D1 = GPI05 (General Purpose Input/Output) PushBotton Protoboard
const int buttonPinOn = D3;     // D3 = GPI00 (General Purpose Input/Output) PushBotton Flash
const int ledPin =  D4;      // D4 = GPIO2 LEDBuiltin (Cuidado GPIO 16 nao tem esta funcao)

// Definição das variáveis  
int buttonStateOff = 0;         // Inicializa a variárel do estado do PushBotton Protoboard como 0
int buttonStateOn = 0;         // Inicializa a variárel do estado do PushBotton Flash como 0  

void setup() {

  pinMode(ledPin, OUTPUT); // Incializa o ledPin  como saída
  pinMode(buttonPinOff, INPUT_PULLUP); // Incializa o buttonPinOff  como entrada (Precisa Resistor de PULLUP)
  pinMode(buttonPinOn, INPUT_PULLUP); // Incializa o buttonPinOn  como entrada (Precisa Resistor de PULLUP)
  
  // Apaga o led ao iniciar MCU
   digitalWrite(ledPin, LOW); 
}

void loop() {
  // Leitura do estado dos valores dos pushbuttons
  buttonStateOff = digitalRead(buttonPinOff);
  buttonStateOn = digitalRead(buttonPinOn);


  // Verifica se o pushbutton está pressionado, se for HIGH:
  if (buttonStateOn == LOW) {
    // Liga o Led (Depende da ligação):
    digitalWrite(ledPin, HIGH);
  } 
  if (buttonStateOff == LOW)
    // Apaga o led
      digitalWrite(ledPin, LOW); 
  
  }
