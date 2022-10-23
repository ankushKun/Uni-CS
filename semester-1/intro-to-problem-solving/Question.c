#include <stdio.h>

// Use switch
// If Male and age 20-40 -> work anywhere
// If Male and age 40-60 -> work urban areas
// if Female -> urban areas only
// Other -> error

int main() {
  char gender;
  int age;
  printf("Enter your gender : ");
  scanf("%c", &gender);
  printf("Enter your age : ");
  scanf("%d", &age);

  switch (gender) {
  case 'M':
  case 'm':
    if (age >= 20 && age <= 40) {
      printf("You can work anywhere");
    } else if (age > 40 && age <= 60) {
      printf("You can work in urban areas");
    } else {
      printf("Go for retirement");
    }
    break;
  case 'F':
  case 'f':
    printf("You can work in urban areas only");
    break;
  default:
    printf("Invalid input");
  }
  return 0;
}
