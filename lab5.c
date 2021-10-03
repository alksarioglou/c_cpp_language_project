#include <stdio.h>

int main (void) {
double d=7.853, d_frac_part;
d_frac_part= d - (int)d;
printf("%f",d_frac_part);
return 0;
}
