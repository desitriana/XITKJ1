void setup() {
	//put your setup code here, to run once:
	pinMode(9, OUTPUT);
}
void loop() {
	//put your setup code here, to run repeatedly:
	digitalWrite(9, HIGH);//Pada pin 9, LED menyala
	delay(4500);
	digitalWrite(9, LOW);//Pada pin 9, LED mati
	delay(4500);//Tunda 4,5 sec pada saat mati
}