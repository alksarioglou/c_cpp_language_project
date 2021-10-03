#include <stdio.h>


int main (void) {

if ((fp=fopen("input.txt","r"))==NULL) {

    printf("File can not be opened.\n");


}
else {

  char a[10];
  int ch,i=0;
  while (i<10) {
    if ((ch=getc(fp))!= 'EOF') {

        a[i++]=ch;

    }
    else break;

  }

for (int j=0;j<10;j++) {

    printf("%c",a[j]);

}

for (int j=0;j<10;j++) {

    switch (a[j]){

        case 'a':case 'e':case'i':case 'o': case 'u':printf("%c is a vowel\n", a[j]);
        break;
        default: printf("%c is not a vowel",a[j]);
        break;
    }

}







}





return 0;
}


