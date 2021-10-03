#include <stdio.h>

int main (void) {

struct part{

double real;
double imaginary;


} c1={0.0,1.0},c2={1.0,0.0},c3;



c3.real=c1.real+c2.real;
c3.imaginary=c1.imaginary+c2.imaginary;

printf("c1 = %f + %f", c1.real, c1.imaginary);
printf("c2 = %f + %f", c2.real, c2.imaginary);
printf("c3 = %f + %f", c3.real, c3.imaginary);

return 0;
}
