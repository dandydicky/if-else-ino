const int analogPin = A0;    
const int ledPin = 13;       
const int threshold = 400;   // variabel ini digunakan untuk membandingkan nilai antara variabel analogPin dengan threshold.

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);    //bagian ini digunakan untuk set serial monitor pada baud rate 9600.
}

void loop() {
  int analogValue = analogRead(analogPin);   //variabel analogValue akan menampung isi nilai dari variabel analogPin,, dengan sistem pembacaan analog.
  if (analogValue > threshold) {           //jika nilai dari variabel analogValue lebih besar dari nilai variabel threshold, maka :
    digitalWrite(ledPin, HIGH);          // ledPin berlogika high atau nyala
  } else {                           // kalau tidak (jika nilai dari variabel analogValue lebih kecil dari nilai variabel threshold)
    digitalWrite(ledPin, LOW);          //edPin berlogika low atau mati.
  }

  Serial.println(analogValue);    //digunakan untuk membaca hasil dari nilai variabel analogValue pada serial monitor..
  delay(1);       
}
