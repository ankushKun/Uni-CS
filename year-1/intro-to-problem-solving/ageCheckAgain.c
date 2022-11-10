#include "stdio.h"

int main() {
  printf("Enter your age : ");
  int age;
  scanf("%d", &age);

  if (age < 1) {
    printf("Invalid age\n");
  } else if (age < 18) {
    printf("You can not vote\n");
  } else if (age < 100) {
    printf("You can vote\n");
  } else {
    printf("Invalid age\n");
  }
  return 0;
}
