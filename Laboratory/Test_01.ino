// Stepper Motor X
const int stepPin = 2; //X.STEP
const int dirPin = 5; // X.DIR
const int enPin = 8; // Enable

void setup() 
{
  // Sets the two pins as Outputs
  pinMode( stepPin, OUTPUT ); 
  pinMode( dirPin, OUTPUT );
  pinMode( enPin, OUTPUT );
}
 
void loop() 
{
  
  digitalWrite( enPin, LOW ); 
  digitalWrite(dirPin,LOW); // Enables the motor to move in a particular direction
  for(int x = 0; x < 3670; x++) 
  {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(1500); 
  }
  digitalWrite( enPin, HIGH ); 

  delay(5000); // One second delay
  
  digitalWrite( enPin, LOW ); 
  digitalWrite(dirPin,HIGH); //Changes the rotations direction
  for(int x = 0; x < 3670; x++) 
  {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(1500);
  }
  digitalWrite( enPin, HIGH ); 
  
  delay(5000);
}
