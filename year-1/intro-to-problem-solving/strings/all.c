#include <stdio.h>

int main() {
  for (int i = 0; i < 128; i++) {
    printf("ascii: '%d'\tchar: '%c'\n", i, i);
  }
  return 0;
}
