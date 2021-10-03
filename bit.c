#include <stdio.h>

int main (void) {

unsigned short i,j,k;

struct date {
    unsigned int day: 5;
    unsigned int month: 4;
    unsigned int year: 7;

}date1;

date1.day=28;
date1.month=5;
date1.year=20;

printf("%d",date1.day);

return 0;
}
