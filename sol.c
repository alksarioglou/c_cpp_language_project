/* Lab 10a Task4 Solution */

/* Prints the message hidden in "message.txt" by printing out every fourth character.
   Complete the following:
   (a) Open "message.txt" for reading (exit upon failure)
   (b) Read each character from the file, printing out every fourth character
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)  {
     FILE *fp;

     /* (a) Open "message.txt" for reading (exit upon failure) */
     fp = fopen("message.txt", "r");
     if (fp == NULL) {
        printf("\nCan't open message.txt\n");
        exit(EXIT_FAILURE);
     }
     else {
        int ch;
        int pos = 0;
        /* (b) Read each character from the file, printing out every fourth character */
        while ((ch = getc(fp)) != EOF) {
          if (((pos++)+1)%4 == 0) {
             printf("%c", ch);
          }
        }
     }

     fclose(fp);

     return 0;

}
