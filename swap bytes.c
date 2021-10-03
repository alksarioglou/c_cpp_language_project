#include <stdio.h>

unsigned short swap_bytes (unsigned short i);

int main (void) {

printf("Enter a hexadecimal number up to four digits:");
unsigned short i;

scanf("%hx", &i);

printf("\n%hx\n", swap_bytes(i));

return 0;
}

unsigned short swap_bytes (unsigned short i) {

    unsigned short j=i;
    unsigned short lower,upper;

    lower = i<<8;
    upper = j>>8;


    return lower | upper;

}
