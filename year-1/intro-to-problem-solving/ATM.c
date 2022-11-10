#include "stdio.h"

int main() {
  int amtInAtm, amtToWithdraw;
  printf("Enter amount in the ATM : ");
  scanf("%d", &amtInAtm);

  printf("\nEnter amount to withdraw : ");
  scanf("%d", &amtToWithdraw);

  printf("\n1. Withdraw Rs.500 notes\n");
  printf("2. Withdraw Rs.100 notes\n");
  printf("3. Withdraw Rs.50 notes\n\n");
  printf("4. Withdraw Rs.20 notes\n\n");

  int opt = 0;
  int notes, rem;

  printf("Enter choice : ");
  scanf("%d", &opt);

  int noteVal;
  switch (opt) {
  case 1:
    noteVal = 500;
    break;
  case 2:
    noteVal = 100;
    break;
  case 3:
    noteVal = 50;
    break;
  case 4:
    noteVal = 20;
    break;
  default:
    noteVal = -1;
  }

  if (noteVal == -1) {
    printf("\nInvalid input\n");
  } else if (amtToWithdraw > amtInAtm) {
    printf("\nNot enough money in ATM");
  } else {
    notes = amtToWithdraw / noteVal;
    rem = amtToWithdraw % noteVal;

    printf("\nAmount of notes : %d\n", notes);

    if (rem > 0) {
      printf("Remaining amount : Rs %d\n", rem);
    }
  }
  return 0;
}
