
int laser = 6;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(laser, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(laser, HIGH);
}
