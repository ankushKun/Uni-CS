#include <stdio.h>

int main() {
  int w1, h1, w2, h2;
  printf("Enter width and height of first matrix: ");
  scanf("%d %d", &w1, &h1);
  printf("Enter width and height of second matrix: ");
  scanf("%d %d", &w2, &h2);

  // check if multiplication is possible
  if (w1 != h2) {
    printf("Matrices cannot be multiplied");
    return 0;
  }

  int mat1[h1][w1];
  int mat2[h2][w2];

  // input
  printf("Enter first matrix \n");
  for (int i = 0; i < h1; i++) {
    for (int j = 0; j < w1; j++) {
      printf("Enter element %d,%d: ", i, j);
      scanf("%d", &mat1[i][j]);
    }
  }

  printf("Enter second matrix \n");
  for (int i = 0; i < h2; i++) {
    for (int j = 0; j < w2; j++) {
      printf("Enter element %d,%d: ", i, j);
      scanf("%d", &mat2[i][j]);
    }
  }

  // multiply
  int mat3[h1][w2];
  for (int i = 0; i < h1; i++) {
    for (int j = 0; j < w2; j++) {
      mat3[i][j] = 0;
      for (int k = 0; k < w1; k++) {
        mat3[i][j] += mat1[i][k] * mat2[k][j];
      }
    }
  }

  // print
  for (int i = 0; i < h1; i++) {
    for (int j = 0; j < w2; j++) {
      printf("%d ", mat3[i][j]);
    }
    printf("\n");
  }
}
