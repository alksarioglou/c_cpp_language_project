#include <stdio.h>

int main (void) {
double sum=0;
double average=0;
int i=0;
double a[10]={3.2,2.4,6.6,7.3,4.2,9.9,12.0,-3.2,-4.1,5.4};
while (i<10) {
    sum+=a[i];
    i++;
}
average=sum/10;
printf("Sum is %.2lf\n",sum);
printf("Average is %.2lf", average);
return 0;

}
