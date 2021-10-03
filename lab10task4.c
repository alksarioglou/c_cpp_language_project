/* Lab 10b Task 4 */

/* A file copying program. */

/*
   Complete the following:
   (a) Declare main so that it can access command line arguments.
   (b) Check that there are three command line arguments, and if not,
       exit with the message "usage: check filename".
   (c) Try to open the first file name given on the command line. If file can't be
       opened print the message "Can't open <filename> and exit,
       else print "<filename1> opened successfully!"
   (d) Try to open the second file name given on the command line.  If file can't be
       opened print the message "Can't open <filename> and exit,
       else print "<filename2> opened successfully!"
   (e) If both filenames can be opened, copy filename1 to filename2, and print
       "File copied successfully."
   (f) Close both files.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* (a) Declare main so that it can access command line arguments: */
int main (int argc, char *argv[]) {
     /* declare two file pointers: */
     FILE *fp1, *fp2;

     /* (b) Check that there are three command line arguments, and if not,
       exit with the message "usage: check filename".  */

    if (argc!=3)  {

        printf("usage: check filename");
        exit(EXIT_FAILURE);
    }


     /* (c) Try to open the first file name given on the command line. */

    fp1=fopen(argv[1],"r");

    if (fp1 == NULL) {
	    printf("Can't open %s\n", argv[1]);
	    exit(EXIT_FAILURE);
	  }
	  else {
       printf("\n%s opened successfully!\n", argv[1]);
     }



     /* (d) Try to open the first file name given on the command line. */

    fp2=fopen(argv[2],"w");

    if (fp2 == NULL) {
	    printf("Can't open %s\n", argv[1]);
	    exit(EXIT_FAILURE);
	  }
	  else {
       printf("\n%s opened successfully!\n", argv[1]);
     }


     /* (e) If both filenames can be opened, copy filename1 to filename2, and print
       "File copied successfully."    */

    char ch;
    while ((ch=getc(fp1))!=EOF) {

        putc(ch,fp2);
    }

    printf("File copied successfully.");



     /* (f) Close both files: */

    fclose(fp1);
    fclose(fp2);
	  return 0;
}
