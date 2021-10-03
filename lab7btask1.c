/* Lab 7b Task 1  */

/* Complete the seven steps as described in the comments.
   The solution to Step 1 is given as an example.
*/

#include <stdio.h>
#define N 10


int main(void) {

        /* Given the following statements: */
           int a[N] = {1,2,3,4,5,6,7,8,9,10};
           int *p = &a[0], *q = &a[N-1], temp;

        /* Step 1: what is the value of *(p+3) ?
           Write a suitable statement to test your prediction.
           <write your code below> */
           printf("%d\n", *(p+3));

        /* Step 2: what is the value of *(q+3) ?
           Write a suitable statement to test your prediction.
           <write your code below> */
        printf("%d\n", *(q+3));

        /* Step 3: what is the value of q-p ?
           Write a suitable statement to test your prediction.
           Note: write the expression as (int)(q-p) to supress any
           formatting warnings from the compiler.
           <write your code below> */
        printf("%d\n",(int)(q-p));

        /* Step 4: is the expression (p < q) true or false?
           Write a suitable statement to test your prediction.
           Note: write the expression as (int)(p<q) to supress any
           formatting warnings from the compiler.
           <write your code below> */
           printf("%d\n",(int)(p<q));


        /* Step 5: is the expression (*p < *q) true or false?
           Write a suitable statement to test your prediction.
           Note: write the expression as (int)(*p<*q) to supress any
           formatting warnings from the compiler.
           <write your code below> */
           printf("%d\n",(int)(*p<*q));


        /* Step 6: using only *p, *q and temp, write a while loop
           that reverses the order of the elements in a, i.e. such
           that afterwards it contains
           10,9,8,7,6,5,4,3,2,1. Write a further loop to show that
           your code has worked. <write your code below> */
           while (p<q) {
               temp=*p;
               *p++=*q;
               *q--=temp;

            }





        /* Step 7: using any format you like, write a further loop
           to show that your code in Step 6 has worked.
           <write your code below> */
           printf("Array is now: ");
            for (p=&a[0];p<&a[N];p++) {
             printf("%d ",*p);


            }




	return 0;
}


