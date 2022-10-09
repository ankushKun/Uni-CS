#include "stdio.h"

int main() {
  char in;
  printf("Input a character : ");
  scanf("%c", &in);
  printf("ASCII for %c is %d", in, (int)in);
  return 0;
}
