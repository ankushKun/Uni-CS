#include <stdio.h>

// macro/inline function to get max of 3 numbers
#define MAX(a, b, c) (a > b && a > c ? a : (b > c ? b : c))

// macro/inline function to get min of 3 numbers
#define MIN(a, b, c) (a < b && a < c ? a : (b < c ? b : c))

int main() {
  int x, y, z, large, small;

  // accept 3 numbers from console
  printf("Enter 3 numbers: ");
  scanf("%d%d%d", &x, &y, &z);

  // call inline function to get the max and min of inputed numbers
  large = MAX(x, y, z);
  small = MIN(x, y, z);

  // print the largest and smallest numbers
  printf("\nMax between %d, %d, and %d is %d.", x, y, z, large);
}
