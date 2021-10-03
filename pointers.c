#include <stdio.h>

void decompose(double x, long *integer, double *fraction);


int main (void) {
    double x,f;
    long i;
    printf("Enter any number:\n");
    scanf("%lf", &x);
    decompose(x,&i,&f);
    printf("Integer part: %ld\n", i);
    printf("Fraction part: %.2f", f);

return 0;
}

void decompose(double x, long *integer, double *fraction) {

*integer= (long) x;
*fraction= x - *integer;

}
