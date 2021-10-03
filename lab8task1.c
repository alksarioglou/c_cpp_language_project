/* Lab 8a Task1 */

/* In each the following steps you are asked to identify
   which of the following calls don't work and explain why.

*/

#include <stdio.h>

int main(void)  {
printf("%c", '\n');
   printf("%c", "\n");
   printf("%s", '\n');
   printf("%s", "\n");
   printf('\n');
   printf("\n");
   putchar('\n');
   putchar("\n");
   puts('\n');
   puts("\n");
   puts("");
printf("%c", '\n');
    return 0;
}
