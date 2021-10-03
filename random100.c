#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define  SIZE 100

int rand_coin();
int main (void) {
srand(time(NULL));
for (int i=0;i<10;i++){

printf("%d\n",rand_coin());
}
return 0;
}




int rand_coin() {

    return 1+rand()%100;             /* use the rand function to return 0 or 1 */
}
