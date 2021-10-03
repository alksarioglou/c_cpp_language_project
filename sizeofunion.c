#include <stdio.h>
#include <stdlib.h>   /* needed for rand() and srand() functions */
#include <time.h>  /* needed for time() function in getData() */

  union sensorInfo {
    short pressure;
    int counter;
    long time;
    float temperature;
    double acceleration;
  };


  int main (void) {
    union sensorInfo sensor;
  printf("size of union is: %d",sizeof(sensor));
  return 0;

  }
