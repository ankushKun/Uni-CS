#include "stdio.h"

int main() {
  printf("Enter a number : ");
  int num;
  scanf("%d", &num);
  if (num < 0) {
    printf("Negative number");
  } else if (num == 0) {
    printf("Number is 0");
  } else {
    printf("Number is positive");
  }
  return 0;
}
