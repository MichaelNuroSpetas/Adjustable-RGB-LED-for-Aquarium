const int wPin = 6;
const int rPin = 9;
const int gPin = 10;
const int bPin = 11;

const int rPot = A0;
const int gPot = A1;
const int bPot = A2;
const int wPot = A3;

int rVal = 0;
int gVal = 0;
int bVal = 0;
int wVal = 0;

void setup() {
  Serial.begin(19200);
  pinMode(rPin, OUTPUT);
  pinMode(gPin, OUTPUT);
  pinMode(bPin, OUTPUT);
  pinMode(wPin, OUTPUT);
  Serial.println("Starting");
}

void loop()
{
    rVal = analogRead(rPot);
    rVal = map(rVal, 0, 1023, 10, 255);
    gVal = analogRead(gPot);
    gVal = map(gVal, 0, 1023, 10, 255);
    bVal = analogRead(bPot);
    bVal = map(bVal, 0, 1023, 10, 255);
    wVal = analogRead(wPot);
    wVal = map(wVal, 0, 1023, 10, 255);
    
    if(rVal <= 15)
    {
      rVal = 0;
    }
    if(gVal <= 15)
    {
      gVal = 0;
    }
    if(bVal <= 15)
    {
      bVal = 0;
    }
    if(wVal <= 15)
    {
      wVal = 0;
    }
    
    analogWrite(rPin, rVal);
    analogWrite(gPin, gVal);
    analogWrite(bPin, bVal);
    analogWrite(wPin, wVal);
    
    Serial.print("wVal =");
    Serial.println(wVal);
    Serial.print("rVal =");
    Serial.println(rVal);
    Serial.print("gVal =");
    Serial.println(gVal);
    Serial.print("bVal =");
    Serial.println(bVal);
    
    delay(5);
    
}
  
