#include <stdio.h>

#define sentence 80

int main (void) {
    char sent[sentence+1];
    printf("Sentence:\n");
    gets(sent);
    printf("You typed: %s",sent);
/*char str[]="hahahaha i ";
puts(str);
printf("%s\n",str);
puts(str); */
return 0;



}
