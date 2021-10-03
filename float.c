#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#define PI 3.141593

int main (void) {
    int grade;
    char L;
    printf("Enter a numerical grade:");
    scanf("%d",&grade);
    int i=grade/10;
    switch (i) {

    case 10: case 9: L='A';
    break;
    case 8: L='B';
    break;

    }
    printf("Letter grade: %c", L);
    return 0;

}
