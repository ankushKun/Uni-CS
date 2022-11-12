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

  int checked[n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j != i && arr[i] == arr[j]) {
        int exists = 0;
        for (int k = 0; k < n; k++) {
          if (arr[i] == checked[k]) {
            exists = 1;
          }
        }
        if (!exists) {
          printf("\n%d is duplicate at position %d and %d", arr[i], i, j);
          checked[i]=arr[i];
        }
      }
    }
  }

  return 0;
}
