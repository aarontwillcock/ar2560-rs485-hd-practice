//Constants
//  Transmission / Reception pin (1 = Tx, 0 = Rx)
const char TX_RX_PIN = 2;
//  LED Pin
const char LED_PIN = 22;
//  Serial baud rate
const unsigned long BAUD = 115200;

//Global Vars
//  LED Toggle Var
bool LED_SET_ON = 0;
//  Array of bytes to send
byte byteArray[6] = {0x8A, 0xCC, 0x10, 0x01, 0x10, 0x95};

//Initialization
void setup() {

  //Serial Communications
  Serial.begin(BAUD);

  //Configure TxRx Pin
  pinMode(TX_RX_PIN, OUTPUT);

  //Configure LED Pin
  pinMode(LED_PIN, OUTPUT);
  
  //Set to sender
  digitalWrite(TX_RX_PIN, HIGH);

}


//Forever
void loop() {

  Serial.write(byteArray,6);
   
  digitalWrite(LED_PIN,HIGH);
  delay(100);
  digitalWrite(LED_PIN,LOW);

  //~0.5 Hz freq
  delay(1900);

}
