#include "stdio.h"

int main() {
  printf("Type an alphabet : ");
  char c;
  scanf("%c", &c);
  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' ||
      c == 'E' || c == 'I' || c == 'O' || c == 'U') {
    printf("Entered character is a Vowel");
  } else {
    printf("Entered character is not a Vowel");
  }
  return 0;
}
