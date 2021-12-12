//void setup() {
  //pinMode(2, INPUT);
  //Serial.begin(9600);
//}

//void toplama(){
  //int toplam = 12+13;
  //Serial.print(toplam);
  //}
  
//void loop() { 
  //if(digitalRead(2)){ 
    //toplama(); 
    //}
//}
void setup() {
  pinMode(2, INPUT); // 2 numaralı dijital pini giriş olarak ayarladık
  pinMode(3, INPUT); // 2 numaralı dijital pini giriş olarak ayarladık
  pinMode(4, INPUT); // 2 numaralı dijital pini giriş olarak ayarladık
  pinMode(5, INPUT); // 2 numaralı dijital pini giriş olarak ayarladık
  pinMode(6, INPUT); // 2 numaralı dijital pini giriş olarak ayarladık
  pinMode(7, INPUT); // 2 numaralı dijital pini giriş olarak ayarladık
  pinMode(8, INPUT); // 2 numaralı dijital pini giriş olarak ayarladık

  Serial.begin(9600); // seri haberleşme hızı 9600 BaudRate
}
 

  
void loop() { // sonsuz döngümüze girdik
  if(digitalRead(2)){ // eğer 2 numaralı pindeki butona basılı ise
    Serial.write("2"); // toplama fonksiyonunu çağır ve dönen değeri seri porta yaz
  }
  if(digitalRead(3)){ // eğer 2 numaralı pindeki butona basılı ise
    Serial.write("3"); // toplama fonksiyonunu çağır ve dönen değeri seri porta yaz
  }
  if(digitalRead(4)){ // eğer 2 numaralı pindeki butona basılı ise
    Serial.write("4"); // toplama fonksiyonunu çağır ve dönen değeri seri porta yaz
  }
  if(digitalRead(5)){ // eğer 2 numaralı pindeki butona basılı ise
    Serial.write("5"); // toplama fonksiyonunu çağır ve dönen değeri seri porta yaz
  }
  if(digitalRead(6)){ // eğer 2 numaralı pindeki butona basılı ise
    Serial.write("6"); // toplama fonksiyonunu çağır ve dönen değeri seri porta yaz
  }
  if(digitalRead(7)){ // eğer 2 numaralı pindeki butona basılı ise
    Serial.write("7"); // toplama fonksiyonunu çağır ve dönen değeri seri porta yaz
  }
  if(digitalRead(8)){ // eğer 2 numaralı pindeki butona basılı ise
    Serial.write("8"); // toplama fonksiyonunu çağır ve dönen değeri seri porta yaz
  }

  delay(2000);
}
