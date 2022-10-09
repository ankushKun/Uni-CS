#include "stdio.h"

int main() {
  printf("What is your age : ");
  int age;
  scanf("%d", &age);
  if (age < 1) {
    printf("Invalid age");
  } else if (age < 18) {
    printf("You can not vote");
  } else if(age > 100){
    printf("Age too high (Generally invalid age)");
  } else {
    printf("You can vote");
  }
  return 0;
}
