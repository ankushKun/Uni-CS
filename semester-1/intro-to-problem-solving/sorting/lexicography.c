#include <math.h>
#include <stdio.h>
#include <string.h>

void lexsort(char *ar[]) {
  for (int i = 0; i < strlen(*ar); i++) {
    for (int j = i + 1; j < strlen(*ar); j++) {
      if (strcmp(ar[i], ar[j]) > 0) {
        char *temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;
      }
    }
  }
}

int main() {
  char *arr[] = {"hello", "world", "this", "is", "a", "test"};

  lexsort(arr);

  for (int i = 0; i < 6; i++) {
    printf("%s\n", arr[i]);
  }
  return 0;
}
