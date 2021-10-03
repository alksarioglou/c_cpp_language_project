#include <stdio.h>

int main (void) {
int *p,i;
p=&i;

printf("Enter: ");

scanf("%d",p);

printf("%d",*p);

return 0;
}
