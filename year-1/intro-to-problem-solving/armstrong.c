#include <stdio.h>

int main() {
  int min = 1;
  int max = 2000000000;
    int sum = 0;
  for (int n = 1634; n > 0; n /= 10) {
    int end = n % 10;
    sum += end * end * end;
  }
  /* printf("%d\n", sum); */
  if (sum == 1634) {
    printf("%d\n", sum);
  }
  for (int i = min; i < max; i++) {
    int sum = 0;
    /* printf("%d\n",i); */
    for (int n = i; n > 0; n /= 10) {
      int end = n % 10;
      sum += end * end * end;
    }
    /* printf("%d\n", sum); */
    if (sum == i) {
      printf("%d\n", sum);
    }
  }
}
