#include <stdio.h>

int main(){
  int a,b;
  printf("Enter a : ");
  scanf("%d", &a);
  printf("Enter b : ");
  scanf("%d", &b);
  printf("\n");

  printf("a + b = %d\n", a + b);
  printf("a - b = %d\n", a - b);
  printf("a * b = %d\n", a * b);
  printf("a / b = %f\n", (float)a / b);
  printf("a %% b = %d\n", a % b);
  return 0;
}
