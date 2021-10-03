#include <stdio.h>

#include <string.h>

int count_char (char str[], char *p);

int main (void) {

char str[100], *p;

printf("Enter some text: ");

int ch,i=0;

while ((ch=getchar())!= '\n') {

    str[i];
    i++;
}




printf("The number of characters = %d", count_char(str,p));


return 0;
}


int count_char (char str[], char *p) {
    int i=0;
    *p=&str[0];

    while (*p!='\0') {
        i++;
    }

return i;
}
