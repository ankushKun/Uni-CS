#include <math.h>
#include <stdio.h>

int fact(int n) {
  if (n <= 1) {
    return 1;
  }
  return n * fact(n - 1);
}

int main() {
  int terms = 5;
  int x = 2;
  float sum = 1;
  while (terms--) {
    if (terms == 1) {
      sum += x;
      break;
    }
    int factorial = 1;
    int temp = terms;
    while (1) {
      factorial *= temp--;
      if (temp <= 1) {
        break;
      }
    }
    temp = terms;
    float pow = 1;
    while (temp--) {
      pow *= x;
    }
    printf("%f\n", pow);
    sum += pow / factorial;
  }
  printf("sum = %f", sum);
  return 0;
}
