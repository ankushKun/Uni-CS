#include "stdio.h"

int main() {
  // 2 -> 0010
  //         1
  //         0

  // 3 -> 0011
  //         1
  //         1

  /* printf("%d\n", 2&1); */
  /* printf("%d\n", 3&1); */

  int in;
  printf("Enter a number : ");
  scanf("%d", &in);

  if (in & 1) {
    printf("\nThe number is odd\n");
  } else {
    printf("\nThe number is even\n");
  }
  return 0;
}
