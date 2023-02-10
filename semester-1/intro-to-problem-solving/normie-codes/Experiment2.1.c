#include <stdio.h>

int main()
{
  unsigned char a = 5, b = 9;
  printf("a = %d, b = %d\n", a, b);
  printf("a&b = %d\n", a & b);
  printf("a|b = %d\n", a | b);
  printf("a^b = %d\n", a ^ b);
  printf("~a = %d\n", a = ~a);
  printf("b<<1 = %d\n", b << 1);
  printf("b>>1 = %d\n", b >> 1);

  return 0;
}
