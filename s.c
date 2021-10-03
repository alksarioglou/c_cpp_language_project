
/* A program that prompts the user to enter a string and returns the number of characters entered
   using a function called count_chars.
*/

#include <stdio.h>

#define N 100

/* function prototype */
int read_line(char str[], int n);

int main(void)  {

    char str[N];

    printf("\nEnter a line of text:\n");
    int chars_read = read_line(str, N);

    printf("You entered %d characters:\n", chars_read);
    for (int i=0; str[i]!='\0'; i++) {
      printf("%c", str[i]);
    }
    printf ("\n");

    return 0;
}

int read_line(char str[], int n) {
    int ch, i = 0;
    while ((ch = getchar()) != '\n')
      str[i++] = ch;

    str[i] = '\0';
    return i;
}
