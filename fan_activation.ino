int fan_pin = 8;
void setup() {
  pinMode(fan_pin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
int temperature =random(200,400)/ 10 ;
Serial.print("Temperature: ");
Serial.print(temperature);
Serial.println(" °C");
if (temperature>30){
Serial.println("! High temperature detected! Fan ON ");
digitalWrite(fan_pin, HIGH);// Turns the fan ON
}
else {
  Serial.println(" emperature normal. Fan OFF");
  digitalWrite(fan_pin, LOW); // Turns the fan OFF
}

delay(2000);
}
