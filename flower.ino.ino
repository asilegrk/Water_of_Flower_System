
int role = 4;
int nemSensor = A2;

int sinirDeger = 400;


void setup() {

  pinMode(role, OUTPUT);
  pinMode(nemSendor,OUTPUT);

  digitalWrite(role,HIGH);

  Serial.begin(9600);
}

void loop() {

  int nem = analogRead(nemSensor);
  Serial.println(nem);

  if(nem>=sinirDeger){
    digitalWrite(role,LOW);
    delay(1000);
    digitalWrite(role,HIGH);
    delay(5000);
  }
  else{
    digitalWrite(role,HIGH);
  }
  
}
