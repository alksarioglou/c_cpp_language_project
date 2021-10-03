/* Lab 11a Task 1 Problem */

/*   In each step a-g you are asked to write some
   statements to test your predictions. */

#include <stdio.h>

int main (void) {

    /* Step a):
      Declare and assign two int variables i=15 and j=25 and
      try to predict the result of: i & j
      Test your prediction with a suitable printf statement. */
      /* <write the code below>    */

      int i=15;
      int j=25;
      printf("%d",i&j);


    /* Step b):
      Next assign i=44 and j=32 and try to predict the result of: i | j
      Test your prediction with a suitable printf statement. */
      /* <write the code below>    */
      i=44;
      j=32;
      printf("\n%d\n", i | j);



    /* Step c):
      Next assign i=19 and j=32 and try to predict the result of: i ^ j
      Test your prediction with a suitable printf statement. */
      /* <write the code below>    */
      i=19;
      j=32;

      printf("%d\n", i ^ j);


   /* Step d):
      Next assign i=8 and j=9 and try to predict the result of: i >> 1 + j >> 1
      Test your prediction with a suitable printf statement. */
      /* <write the code below>    */
      i=8;
      j=9;

      printf("%d\n",i>>1+j>>1);



   /* Step e):
      Next assign i=1 and try to predict the result of: i & ~i;
      Test your prediction with a suitable printf statement. */
      /* <write the code below>    */
      i=1;
      printf("%d\n",i & ~i);




   /* Step f):
      Next assign i=2, j=1 and a third int variable k=0.
      Try to predict the result of: ~i & j ^ k;
      Test your prediction with a suitable printf statement. */
      /* <write the code below>    */
      i=2;
      j=1;
      int k=0;

      printf("%d\n", ~i & j ^ k);


   /* Step g):
      Finally assign i=7 and j=8 and k=9.
      Try to predict the result of: i ^ j & k;
      Test your prediction with a suitable printf statement. */
      /* <write the code below>    */
      i=7;
      j=8;
      k=9;
      printf("%d\n", i ^ j & k);

  return 0;
}
