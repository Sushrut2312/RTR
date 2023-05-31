#define analogOut A1
int keyp;
char actualKey;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int adcVal;
  adcVal = analogRead(analogOut);  

  //--------------------------------------------------------Analog Read Func--------------------------

  if (adcVal>1020  && adcVal<1025)
  {
    actualKey='1';  
    Serial.print("Key Pressed: ");
    Serial.println(actualKey); 
    keyp=1;  
    delay(100);
  }
  else if ( adcVal>690  && adcVal<695)
  {
    actualKey='2';
    Serial.print("Key Pressed : ");
    Serial.println(actualKey);
    keyp=2;
    delay(100);
  }
  else if ( adcVal>520  && adcVal<526)
  {
    actualKey='3';
    Serial.print("Key Pressed : ");
    Serial.println(actualKey);
    keyp=3;
    delay(100);
  }
  else if ( adcVal>419  && adcVal<425)
  {
    actualKey='A';
    Serial.print("Key Pressed : ");
    Serial.println(actualKey);
    keyp=4;
    delay(100);
  }
  else if ( adcVal>508  && adcVal<512)
  {
    actualKey='4';
    Serial.print("Key Pressed : ");
    Serial.println(actualKey);
    keyp=5;
    delay(100);
  }
  else if ( adcVal>408  && adcVal<415)
  {
    actualKey='5';
    Serial.print("Key Pressed : ");
    Serial.println(actualKey);
    keyp=6;
    delay(100);
  }
  else if ( adcVal>343  && adcVal<347)
  {
    actualKey='6';
    Serial.print("Key Pressed : ");
    Serial.println(actualKey);
    keyp=7;
    delay(100);
  }
  else if ( adcVal>295  && adcVal<299)
  {
    actualKey='B';
    Serial.print("Key Pressed : ");
    Serial.println(actualKey);
    keyp=8;
    delay(100);
  }
  else if ( adcVal>338  && adcVal<342)
  {
    actualKey='7';
    Serial.print("Key Pressed : ");
    Serial.println(actualKey);
    keyp=9;
    delay(100);
  }
  else if ( adcVal>290  && adcVal<295)
  {
    actualKey='8';
    Serial.print("Key Pressed : ");
    Serial.println(actualKey);
    keyp=10;
    delay(100);
  }
  else if ( adcVal>256 && adcVal<260)
  {
    actualKey='9';
    Serial.print("Key Pressed : ");
    Serial.println(actualKey);
    keyp=11;
    delay(100);
  }
  else if ( adcVal>228  && adcVal<230)
  {
    actualKey='C';
    Serial.print("Key Pressed : ");
    Serial.println(actualKey);
    keyp=12;
    delay(100);
  }
  else if ( adcVal>250 && adcVal<256)
  {
    actualKey='*';
    Serial.print("Key Pressed : ");
    Serial.println(actualKey);
    keyp=13;
    delay(100);
  }
  else if ( adcVal>226  && adcVal<228)
  {
    actualKey='0';
    Serial.print("Key Pressed : ");
    Serial.println(actualKey);
    keyp=14;
    delay(100);
  }
  else if ( adcVal>201  && adcVal<206)
  {
    actualKey='#';
    Serial.print("Key Pressed : ");
    Serial.println(actualKey);
    keyp=15;
    delay(100);
  }
  else if( adcVal>184 && adcVal<188)
  {
    actualKey='D';
    Serial.print("Key Pressed : ");
    Serial.println(actualKey);
    keyp=16;
    delay(100);
  }
  else
  {
    
  }
  delay(100);
}
//--------------------------------------------------------Analog Read Func--------------------------
