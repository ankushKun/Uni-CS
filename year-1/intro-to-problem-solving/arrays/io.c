#include <stdio.h>

int main() {
  int size = 5;
  int vals[size];
  printf("Enter %d integers : ", size);
  for (int i = 0; i < size; i++) {
    scanf("%d ", &vals[i]);
  }
  printf("\n");
  for (int i = 0; i < size; i++) {
    printf("%d ", vals[i]);
  }
  return 0;
}
