#include <stdio.h>
#include <stdlib.h>
int main (void) {

FILE *fp;
char ch;
fp=fopen("one.txt","r");


while ((ch=getc(fp)) != EOF) {

    printf("%c",ch);

}

fclose(fp);


return 0;
}
