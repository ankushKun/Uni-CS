#include "stdio.h"

int main() {
  int KM;
  printf("Enter Kilometers : ");
  scanf("%d", &KM);

  printf("Meters : %d\n", KM * 1000);
  printf("Feet : %f\n", KM * 1000 * 3.28);
  printf("Inches : %f\n", KM * 1000 * 39.37);
  printf("Centimeters : %d\n", KM * 1000 * 100);

  return 0;
}
