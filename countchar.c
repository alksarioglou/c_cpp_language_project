#include <stdio.h>
#define N 100
int count_chars (char sentence[], int n);


int main (void) {
char sentence[N+1];
printf("Enter some text:");
gets(sentence);
int characters = count_chars (sentence,N);

printf("Number of characters:%d",characters);

}

int count_chars (char sentence[], int n) {
int number=0;
for (int i=0;sentence[i]!='\0';i++) {
    number += 1;

}
return number;

}
