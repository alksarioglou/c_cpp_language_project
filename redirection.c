/* Lab 10a Task 2 */

/* Checks whether a file called output.txt
   can be opened for reading */

#include <stdio.h>
#include <stdlib.h>

int main(void)  {
  FILE *fp;
  char ch;
  char a[100];
  int i=0;

  /* Try to open the file output.txt for reading.
     If it can be opened, print "output.txt can be opened",
     or if not, print "output.txt can't be opened". */
  /* <write the code below> */
fp=fopen("output.txt","r");
if (fp==NULL) {

    printf("output.txt can't be opened");
    exit(EXIT_FAILURE);
}
else {
    printf("output.txt can be opened\n");
    while ((ch=getc(fp))!=EOF){
        a[i++]=ch;
    }
}
for (;i>=0;i) {
    printf("%c",a[--i]);


}

  /* Make sure the file is closed: */
  /* <write the code below> */
  fclose(fp);
  return 0;
}
