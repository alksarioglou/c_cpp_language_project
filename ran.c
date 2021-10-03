#include <stdio.h>
#include <stdlib.h>
#include <time.h>
double rand_u(double Lower, double Upper);

int main (void) {
srand(time(NULL));

for (int i=0;i<10;i++){
printf("%f\n",rand_u(0.5,1.0));
}
return 0;
}


double rand_u(double Lower, double Upper) {
    double range= (Upper-Lower) ;   /* range of random number */
    double div= RAND_MAX / range;

    return Lower + (rand()/div);    /* returning a random number in the range */
}
