#include <stdio.h>

int main(void)
{
  union {
    char ch;
    int integer;
    unsigned int u_integer;
    long long_int;
    unsigned long u_long_int;
    float f;
    double d;
    long double l_d;
  } info;

  printf ("The sizeof the union = %ld\n", (unsigned long) sizeof (info));
  /* result is 16 bytes (128 bits) -the size of long double on a typical machine */


  return 0;
}
