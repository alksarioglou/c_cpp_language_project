/* Lab 4b Task 1 */

/* This program prints uses a for loop to print out a table of squares
   between 1 and n, where n is an integer entered by the user.

   a) Run the program and try to determine the smallest value of n that causes failure.
   b) Change the type of the number entered to short and repeat a).
   c) Change the type of the number entered to long and repeat a).
   d) Repeat a) to c) for unsigned short, unsigned int and unsigned long.

   You will find the following helpful:
   type          printf formatting code
   ------------------------------
   signed short       %hd
   signed int         %d
   signed long        %ld
   unsigned short     %hu
   unsigned int       %u
   unsigned long      %lu
*/


#include <stdio.h>
int main(void)
{
 int squared;
 int i;
 unsigned long n;
 printf("Enter a number: ");
 scanf("%lu", &n);
 for (i = 1; i <= n; i++) {
   squared = i * i;
     printf("%d squared = %d\n",i, squared);
 } /* end for loop */

 return 0;
}
