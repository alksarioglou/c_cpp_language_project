#include <stdio.h>

int main (void) {
printf("Type\t\tsizeof\n");
printf("---------------\n");
printf ("char\t\t%lu\n", (unsigned long)(sizeof(char)));
printf ("short\t\t%lu\n", (unsigned long)(sizeof(short)));
printf ("int\t\t%lu\n", (unsigned long) (sizeof(int)));
printf("unsigned int\t\t%lu\n", (unsigned long) (sizeof(unsigned int)));
printf("long\t\t%lu\n", (unsigned long) (sizeof(long)));
printf ("float\t\t%lu\n",(unsigned long)(sizeof(float)));
printf ("double\t\t%lu\n", (unsigned long) (sizeof(double)));
return 0;

}
