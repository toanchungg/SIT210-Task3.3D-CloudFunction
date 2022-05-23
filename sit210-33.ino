int boardLed = D7;

void setup() {
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", myHandler);
    pinMode(boardLed,OUTPUT);
}

void loop() {

}

void myHandler(const char *event, const char *data)
{
    if (strcmp(data,"wave")==0) {
        digitalWrite(boardLed, HIGH);
        delay(300);
        digitalWrite(boardLed, LOW);
        delay(300);
        digitalWrite(boardLed, HIGH);
        delay(300);
        digitalWrite(boardLed, LOW);
        delay(300);
        digitalWrite(boardLed, HIGH);
        delay(300);
        digitalWrite(boardLed, LOW);
        delay(300);

    }
    
    else if(strcmp(data,"pat")==0) {
        digitalWrite(boardLed, HIGH);
        delay(100);
        digitalWrite(boardLed, LOW);
        delay(100);
        digitalWrite(boardLed, HIGH);
        delay(100);
        digitalWrite(boardLed, LOW);
        delay(100);
        digitalWrite(boardLed, HIGH);
        delay(100);
        digitalWrite(boardLed, LOW);
        delay(100);
        digitalWrite(boardLed, HIGH);
        delay(100);
        digitalWrite(boardLed, LOW);
        delay(100);
        digitalWrite(boardLed, HIGH);
        delay(100);
        digitalWrite(boardLed, LOW);
        delay(100);
        digitalWrite(boardLed, HIGH);
        delay(100);
        digitalWrite(boardLed, LOW);
        delay(100);
    }
}