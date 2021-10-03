#include <stdio.h>
 int main (void) {
    double R1,R2,Vi,Vo;
    printf("Enter R1:");
    scanf("%lf",&R1);
    printf("Enter R2:");
    scanf("%lf",&R2);
    printf("Enter Vi:");
    scanf("%lf",&Vi);
    Vo=(-R2/R1)*Vi;
    printf("Vo is:%.2f",Vo);
    return 0;
}
