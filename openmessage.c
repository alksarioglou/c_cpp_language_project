#include <stdio.h>
#include <stdlib.h>

int main (void) {

    FILE *fp;
    char ch;

    fp = fopen("message.txt", "r");
    if (fp == NULL) {
        printf("\nCan't open message.txt\n");
        exit(EXIT_FAILURE);
     }
     else {
            int pos=0;

            while ((ch=getc(fp))!=EOF) {
            if (((pos++)+1)%4==0) {

                printf("%c",ch);


            }



        }

    }

    fclose(fp);

    return 0;
}
