#include <stdio.h>
#include <string.h>

int main (void) {

char str1[10];
int len;
char *p="abc";

strncpy(str1,"abgrg",10);
len = strlen(str1);
puts(p);
puts(str1);
printf("%d",len);

return 0;
}
