 #include <stdio.h>
 #define N 100
 #include <string.h>

 void get_extension(const char *file_name, char *extension);

 int main (void) {
 char file_name[N], extension[N];
 char ch;
 int i=0;
 printf("Enter a file name with extension: \n\n");
 while ((ch=getchar())!= '\n') {
    file_name[i++]=ch;
 }
 file_name[i]='\0';

 get_extension(file_name,extension);
 printf("The extension is: ");
 char *p=extension;
 while (*p)
    printf("%c",*p++);


 return 0;
 }

void get_extension(const char *file_name, char *extension) {
char const *p=file_name + strlen(file_name);
while (p-- > file_name) {
    if (*p=='.'){
        strcpy(extension,p+1);
        return;
        }
    *extension='\0';
}
}


