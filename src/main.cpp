#include <Arduino.h>
#include <bme68x.h>

//create your bme class

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  //initiliase bme sensor
}

void loop() {
  // put your main code here, to run repeatedly:

  // read bme sensor data...
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}