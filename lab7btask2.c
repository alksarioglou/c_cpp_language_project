/* Lab 7b Task 2  */

/* rewrite the function "sum_array" to use pointer arithmetic
   instead of array subscripting -i.e. eliminate the use of
   the variable i and all uses of "[]".
*/

#include <stdio.h>
#define N 10

int sum_array (int a[], int n);


int main(void) {

        /* declare a ten-element array: */
        int a[N] = {1,2,3,4,5,6,7,8,9,10};

        /* print out the sum: */
        printf("sum = %d\n", sum_array(a,N));

	return 0;
}

int sum_array (int a[], int n)  {
  int sum=0,*p;
  for (p=a; p<a+n; p++)   {
    sum += *p;
  }
  return sum;
}
