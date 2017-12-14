/* blink.c
   D. Thiebaut
   taken from https://www.raspberrypi.org/forums/viewtopic.php?f=33&t=23090
   blinks Physical Pin 7 On and Off, 10 times.

   to compile and run:
   gcc -o blink blink.c -lwiringPi
   sudo ./blink
*/

#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265

int main ( void ) {
  int pin = 1;			//corresponds to pin 18 on pi3
  printf("Raspberry Pi wiringPi blink test\n");

  if (wiringPiSetup() == -1) {
    printf( "Setup didn't work... Aborting." );
    exit (1);
  }
  
  pinMode(pin, OUTPUT);

  int i;
  double x,y;
  for ( i=0; i<7200; i++ ) {
    x = cos(PI/180*i);
    y = 45*sin(PI/180*i);
    digitalWrite(pin, 1);    
    delay(x*y);

    digitalWrite(pin, 0);
    delay(x+y);
  }

  return 0;
}
