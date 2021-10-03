#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double power(double x, int n);

int main (void) {
    double x;
    int n;
    printf("Enter x: ");
    scanf("%lf",&x);
    printf("Enter n: ");
    scanf("%d",&n);

    printf("%.2f",power(x,n));


    return 0;
}

double power(double x, int n) {

    if (n==0)
        return 1;

    else {

        return x*power(x, n-1);


    }


}
