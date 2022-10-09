#include "stdio.h"

int main() {
  int a, b, temp;

  printf("A = ");
  scanf("%d", &a);
  printf("B = ");
  scanf("%d", &b);

  /* temp= a; */
  /* a = b; */
  /* b = temp; */

  a = a + b;
  b = a - b;
  a = a - b;

  printf("A = %d\n", a);
  printf("B = %d\n", b);
}
