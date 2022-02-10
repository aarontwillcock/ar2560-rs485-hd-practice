//Constants
//  Transmission / Reception pin (1 = Tx, 0 = Rx)
const char TX_RX_PIN = 2;
//  Serial baud rate
const unsigned short BAUD = 9600;

//Initialization
void setup() {

  //Serial Communications
  Serial.begin(BAUD);

  //Configure TxRx Pin
  pinMode(TX_RX_PIN, OUTPUT);

  //Set to sender
  digitalWrite(TX_RX_PIN, HIGH);

}

//Forever
void loop() {

  //Send Message
  Serial.println("Hello World");

  //1 Hz freq
  delay(1000);

}
