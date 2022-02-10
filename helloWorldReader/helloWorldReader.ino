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
  digitalWrite(TX_RX_PIN, LOW);

}

//Forever
void loop() {

  //Receive Message
  if(Serial.available() > 0){

    //Read string in until return
    String inbound = Serial.readStringUntil('\n');

    //Print string received
    Serial.println(inbound);
  }

  //2 Hz freq
  delay(500);

}
