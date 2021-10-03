/* Lab 11a Task 2 Problem

*/

#include <stdio.h>

int main (void) {

      /* Declare an int variable i, and write a statement
         that "toggles" bit 4
         -i.e. change the bit from a 0 to a 1, or from a 1 to a 0. */
      /* <write the code below>    */
      int i;
      printf("enter a value: \n");
      scanf("%d",&i);

      /* if bit is 1 */
      if (i & 0x0010) {
        i &= ~0x0010;
      }
      /* if bit is 0 */
      else {
        i |= 0x0010;

      }
      printf("\n%d\n", i);
  return 0;
}
