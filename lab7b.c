#include <stdio.h>

void pay_amount(int total, int *twenties, int *tens, int *fives, int *ones);

int main (void) {
int i,twenty,ten,five,one;
printf("Enter an amount in pounds:");
scanf("%d",&i);

pay_amount(i,&twenty,&ten,&five,&one);

printf("20pounds notes:%d\n",twenty);
printf("10pounds notes:%d\n",ten);
printf("5pounds notes:%d\n",five);
printf("1pound coins:%d\n",one);

}

void pay_amount(int total, int *twenties, int *tens, int *fives, int *ones) {
*twenties=total/20;
*tens=(total-*twenties*20)/10;
*fives=(total-*twenties*20-*tens*10)/5;
*ones=(total-*twenties*20-*tens*10-*fives*5)/1;
}
