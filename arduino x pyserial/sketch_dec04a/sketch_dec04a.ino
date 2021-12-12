// global variables
int dipPins[] = {2, 3, 4, 5}; //pines dip switch
int led[] = {6, 7, 8, 9, 10, 11, 12, 13}; //pines leds
int var = 0;

void setup() {
  //dip switch pins
  for(int i = 0; i < 4; i++){
    pinMode(LED_BUILTIN, INPUT);
  }

  //led pins
  for(int i = 0; i < 8; i++){
    pinMode(led[i], OUTPUT);
  }
}

void loop() {
  //here is the loop I'm using to verify the dip switch state
  //but seems to run just the first time the void loop runs
  for(int i = 0; i < 4; i++){
    if(digitalRead(dipPins[i]) == 0){
      var = i + 1;
    }
  }
  
  //everything's fine from here
  switch(var){
    case 1:
      Serial.println("abu")
    break;
    case 2:
      Serial.println("abu2");
    break;
    case 3:
      Serial.println("abu3");
    break;
    case 4:
      Serial.println("abu4");
    break;
    default:
    break;
  }
}
