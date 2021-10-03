/* Lab 10b Task 1 */

/* Checks whether a file name given at the command line
   can be opened for reading */

/*
   Complete the following:
   (a) Declare main so that it can access command line arguments.
   (b) Check that there is at least one command line argument, and if not,
       exit with the message "usage: check filename".
   (c) Try to open the file name given on the command line.
   (d) If file can't be opened print the message "Can't open <filename>,
       else print "Success!"
   (e) Close the file.
*/

#include <stdio.h>
#include <stdlib.h>

/* (a) Declare main so that it can access command line arguments: */
int main (int argc,char *argv[]) {

     /* declare a file pointer: */
       FILE *fp;

     /* b) Check that there is at least one command line argument, and if not,
           exit with the message "usage: check filename". */

        if (argc!=2) {

            printf("usage: check filename");
            exit(EXIT_FAILURE);

        }

                /* (c) Try to open the file name given on the command line: */
        fp=fopen(argv[1],"r");


                /* (d) If file can't be opened print the message "Can't open <filename>,
                else print "Success!"*/
                if (fp==NULL) {
                    printf("Can't open %s",argv[1]);
                    }

                else printf("Success");




                /* (e) Close the file: */
        fclose(fp);

	  return 0;
}
