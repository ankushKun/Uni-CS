#include <stdio.h>

void printArr(int arr[], int len) {
  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void bSort(int arr[], int len) {
  for (int i = 0; i < len; i++) {
    for (int j = 0; j < len - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  int arr[] = {2, 4, 3, 2, 1};
  int len = (int)sizeof(arr) / sizeof(arr[0]);
  printArr(arr,len);
  bSort(arr,len);
  printArr(arr,len);

  return 0;
}
