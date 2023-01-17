#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "a";
  char str2[] = "";
  int result = strcmp(str1, str2);
  printf("%d\n", result);
  /* printf("%d", str1==str2); */
  return 0;
}
