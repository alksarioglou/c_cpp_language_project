#include <stdio.h>

unsigned int print_binary (unsigned int bit,unsigned int number);

int main (void) {

        unsigned int i, j;
        printf("Enter a non-negative number: ");

        scanf("%d",&i);
        printf("%d in hex: %hx\n", i, i);


        printf("%d in binary: ", i);

        for (int j=31;j>=0;j--) {

        printf("%d", print_binary(j,i));


        }
        return 0;
}

unsigned int print_binary (unsigned int bit,unsigned int number) {
unsigned int a;
if (number & 1<<bit) {

            a=1;
            }
            else {

            a=0;
            }
        return a;
}
