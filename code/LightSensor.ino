const int PHOTO = 0;
const int LED = 9;

int val = 0;
int brightness = 0;
int currentBrightness = 0;
int i = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  val = analogRead(PHOTO);
  brightness = 100 - (val/4);
  //Serial.println(brightness);
  Serial.println(currentBrightness);
  if(brightness < 0) {
    brightness = 0;
  }
  if(currentBrightness > brightness) {
    currentBrightness--;
  } else if(currentBrightness < brightness) {
    currentBrightness++;
  }
  analogWrite(LED, currentBrightness);
  
  delay(10);
}
