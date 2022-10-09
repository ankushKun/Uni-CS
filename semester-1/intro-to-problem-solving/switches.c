#include "stdio.h"

int main() {
  char c = 'a';
  while (c) {
    switch (c) {
    case 'a':
      printf("aaaaaaaaa");
      break;
    case 'b':
      printf("ded");
    }
  }
  return 0;
}
