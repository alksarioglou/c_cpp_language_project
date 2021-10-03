#include <stdio.h>

void avg_sum (double data[], int n, double *a,double *s);

int main (void) {

printf("Enter five numbers: ");

double a[5],s,av;
for (int i=0;i<5;i++) {
scanf("%lf", &a[i]);

}
avg_sum (a,5,&av,&s);

printf("Sum is: %.2f\n",s);
printf("Average is: %.2f\n",av);

return 0;
}



void avg_sum (double data[], int n, double *a,double *s) {

for (int j=0;j<n;j++) {

    *s += data[j];

}
*a= *s/n;
}
