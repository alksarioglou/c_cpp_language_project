#include <stdio.h>

int count_ones (unsigned int i);


int main (void) {

unsigned int i;
printf("Enter an non-negative number: ");
scanf("%hx", &i);

printf("Number of ones in the number: %d", count_ones(i));
return 0;
}

int count_ones (unsigned int i) {
int ones=0;

for (int j=0;j<16;j++) {
    if (i & 1 << j) {
        ones++;

    }
}

return ones;

}
