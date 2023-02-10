#include <stdio.h>

int nthFibo(int n) {
  int r = 0;
  if (n == 0)
    r = 0;
  else if (n == 1)
    r = 1;
  else
    r = nthFibo(n - 1) + nthFibo(n - 2);
  return r;
}

void fiboSeries(int n) {
  static int p2 = 0, p1 = 1, p0;
  if (n > 0) {
    printf("%d ", p2);
    p0 = p1 + p2;
    p2 = p1;
    p1 = p0;
    fiboSeries(n - 1);
  }
}

int main() {
  /* printf("%d ", fibo(0)); */
  /* printf("%d ", fibo(1)); */
  /* printf("%d ", fibo(2)); */
  /* printf("%d ", fibo(3)); */
  /* printf("%d ", fibo(4)); */
  /* printf("%d ", fibo(5)); */
  /* printf("%d ", fibo(6)); */
  /* printf("%d ", fibo(7)); */
  /* printf("%d ", fibo(8)); */

  fiboSeries(20);
  return 0;
}
