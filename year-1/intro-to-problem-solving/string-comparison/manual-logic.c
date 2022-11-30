#include <stdio.h>

int stringCompare(char s1[], char s2[]) {
  /* int s1len = sizeof(&s1) / sizeof(s1[0]); */
  /* int s2len = sizeof(&s2) / sizeof(s2[0]); */
  int i = 0;
  for (i = 0; s1[i] == s2[i]; i++) {
    if (s1[i] == '\0') {
      printf("'%c' - '%c' = ", s1[i], s2[i]);
      return 0;
    }
  }
  printf("'%c' - '%c' = ", s1[i], s2[i]);
  return s1[i] - s2[i];
}

int main() {
  char str1[] = "a";
  char str2[] = "a";
  int result = stringCompare(str1, str2);
  printf("%d\n", result);
  /* printf("%d", str1==str2); */
  return 0;
}
