#define led1 = pc12;
#define led2 = pc11;
#define led3 = pc10;
#define led4 = pc9;
#define led5 = pc8;
#define led6 = pc7;


void setup() {
  // put your setup code here, to run once:
  Serial1.begin(9600);

}
char[] GetMessage(){
  
  //Check to see if anything is available in the serial receive buffer
  while (Serial.available() > 0)
 {
   //Create a place to hold the incoming message
   static char message[MAX_MESSAGE_LENGTH];
   static unsigned int message_pos = 0;

   //Read the next available byte in the serial receive buffer
   char inByte = Serial.read();

   //Message coming in (check not terminating character) and guard for over message size
   if ( inByte != '\n' && (message_pos < MAX_MESSAGE_LENGTH - 1) )
   {
     //Add the incoming byte to our message
     message[message_pos] = inByte;
     message_pos++;
   }
   //Full message received...
   else
   {
     //Add null character to string
     message[message_pos] = '\0';

     //Print the message (or do other things)
     Serial.println(message);

     //Reset for the next message
     message_pos = 0;
   }
   return message;
 }
}

void loop() {
  // put your main code here, to run repeatedly:
  char[50] message = GetMessage();
  int i = 0;
  while (message[i]!='\0'){
    if(message[i]=='a' || message[i]=='A'){
      
    }
  }

 
 }
  
}
