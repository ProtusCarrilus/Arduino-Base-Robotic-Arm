
char incoming_value =0;



String bar; // string for storing the informaton

void setup() {
  // start serial communication
  Serial.begin(9600);
  // initialize the library
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}
void loop()
 {
  if (Serial.available()>0)
  {
    incoming_value = Serial.read();
    Serial.print(incoming_value);
    Serial.print("\n");
    if(incoming_value =='1'){
       digitalWrite(3,LOW);}
    else if(incoming_value=='2'){
       digitalWrite(2,LOW);}
    else if(incoming_value=='3'){
       digitalWrite(5,LOW);}
    else if(incoming_value=='4'){
       digitalWrite(4,LOW);}
   else if(incoming_value=='5'){
       digitalWrite(7,LOW);}
   else if(incoming_value=='6'){
       digitalWrite(6,LOW);}
   else if(incoming_value=='7'){
       digitalWrite(9,LOW);}
   else if(incoming_value=='8'){
       digitalWrite(8,LOW);}
  else if(incoming_value=='9'){
       digitalWrite(11, LOW);
    }
   else if(incoming_value=='T'){
       digitalWrite(10, LOW);
    }
   else if(incoming_value=='0'){
       digitalWrite(2,HIGH);
       digitalWrite(3,HIGH);
       digitalWrite(4,HIGH);
       digitalWrite(5,HIGH);
       digitalWrite(6,HIGH);
       digitalWrite(7,HIGH);
       digitalWrite(8,HIGH);
       digitalWrite(9,HIGH);
       digitalWrite(11,HIGH);
       digitalWrite(10,HIGH);
    }
    else{
       digitalWrite(2,HIGH);
       digitalWrite(3,HIGH);
       digitalWrite(4,HIGH);
       digitalWrite(5,HIGH);
       digitalWrite(6,HIGH);
       digitalWrite(7,HIGH);
       digitalWrite(8,HIGH);
       digitalWrite(9,HIGH);
       digitalWrite(11,HIGH);
       digitalWrite(10,HIGH);
    }
  }

  }
 