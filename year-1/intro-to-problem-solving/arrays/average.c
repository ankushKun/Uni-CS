#include "stdio.h"
#include <stdio.h>

int main() {
  int n = 5;
  int arr[n];
  printf("Enter %d numbers : ", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  float avg = 0;
  int great = arr[0];
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
    avg += arr[i];
    great = great < arr[i] ? arr[i] : great;
  }
  avg /= n;
  printf("\nAverage is : %f", avg);
  printf("\nGreatest is : %d", great);

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] == arr[j]) {
        printf("\n%d is duplicate at position %d and %d", arr[i], i, j);
      }
    }
  }

  return 0;
}
