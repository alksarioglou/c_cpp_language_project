/* Lab 9b Task 2 */

/* This program declares a union called 'info' to store the following,
   variables of different types, called 'sensorInfo', as shown below.
   Following the union is the prototype of a function called 'getData' that
   you are asked to complete.
*/

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



union sensorInfo getData(char c);

  int main(void)  {
    char ch;
    printf ("Menu:\n'a' (pressure)\n'b' (counter)\n'c' (time)\n'd' (temperature)\n'e' (acceleration)\n'x' (exit)\n");

  do {
    printf ("\nEnter your choice: ");
     scanf("%c", &ch);
     switch (ch) {
       case 'a': printf("value = %d\n", (getData(ch)).pressure); break;
       case 'b': printf("value = %d\n", (getData(ch)).counter); break;
       case 'c': printf("value = %ld\n", (getData(ch)).time); break;
       case 'd': printf("value = %.2f\n", (getData(ch)).temperature); break;
       case 'e': printf("value = %.2f\n", (getData(ch)).acceleration); break;

     }
  } while (ch != 'x');

return 0;
}

/* write the function 'getData' below. This function takes a single parameter of type char
   -this is the character entered by the user in main, above. The function declares a sensorInfo
   union and assigns a randomly generated value (type-cast) that corresponds to the member
   relating to the character entered.
   The function is incomplete in a number of senses, and should be completed and tested.
*/
union sensorInfo getData(char c) {
    srand((unsigned) time(NULL));    /* this is used to "seed" the pseudo-random number generator */
    /* Declare a sensorInfo union called 'sensorData' : */
    union sensorInfo sensorData;
    /* Write a switch expression to select a case based on the character entered: */
    switch (c) {
    /* example case statement:
        case 'a': sensorData.pressure = (short)(rand()); break;
       -repeat for each of the different characters that could be entered: */
      case 'a': sensorData.pressure = (short) (rand()); break;
      case 'b': sensorData.counter = (int) (rand()) ; break;
      case 'c': sensorData.time = (long) (rand()); break;
      case 'd': sensorData.temperature = (float) (rand()); break;
      case 'e': sensorData.acceleration = (double) (rand()); break;
      default: break;
    }
      /* Write a suitable return statement: */
    return sensorData;
}
