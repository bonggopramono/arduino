#define pbStart 2
#define led 13
int kondisi = 0;

void setup() {
	pinMode(pbStart, INPUT);
	pinMode(led, OUTPUT);
}

void loop() {
	int pbState = digitalRead(pbStart);

	if (pbState == 1 && kondisi == 0){
		digitalWrite(led, HIGH);
		kondisi = 1;
		delay(200);
	}

	else if (pbState == 0 && kondisi == 1){
		digitalWrite(led, HIGH);
		kondisi = 1;
		delay(200);
	}

	else if(pbState == 1 && kondisi == 1){
		digitalWrite(led, LOW);
		kondisi = 0;
		delay(200);
	}
}
