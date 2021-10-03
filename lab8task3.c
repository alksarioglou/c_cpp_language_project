/* Lab 8a Task3 */

/* Given the following statements:

    char date[] = {'J','u','l','y','\x20','1','4','\x20','i','s','\x20','a',
                   '\x20','f','a','m','o','u','s','\x20','d','a','y','!','\0'};
    char *p = date;
    int i;

    ..where '\x20' is the hex representation of the space character

   (a) Write a for loop to print out each character of the array
       using only 'date' (i.e. not p).

   (b) Write a for loop to do the same using only p (i.e. not 'date').

   (c) write both (a) and (b) using while loops.

*/

#include <stdio.h>

int main(void)  {
    char date[] = {'J','u','l','y','\x20','1','4','\x20','i','s','\x20','a',
                   '\x20','f','a','m','o','u','s','\x20','d','a','y','!','\0'};
    int i=0;
    char *p=date;

    while (date[i]!='\0') {
    printf("%c",date[i++]);

    }
    printf("\n");

    while (*p!='\0') {
        printf("%c",*p++);

    }
    return 0;
}
