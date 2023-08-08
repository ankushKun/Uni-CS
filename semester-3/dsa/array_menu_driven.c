#include <stdio.h>
#include <string.h>

int size = 0;
int arr[100];

void printMenu() {
  printf(
      "\n\n1.Create\n2.Display\n3.Insert\n4.Delete\n5.Exit\n\nEnter Option: ");
}

void create() {
  printf("Enter size: ");
  scanf("%d", &size);
  printf("Enter elements: \n");
  for (int i = 0; i < size; i++) {
    printf("item %d: ", i);
    scanf("%d", &arr[i]);
  }
}

void display() {
  printf("\nArray: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
}

void insert() {
  int pos, item;
  printf("Enter item position and value: ");
  scanf("%d %d", &pos, &item);

  if (pos > size || pos < 0)
    return;
  for (int i = size - 1; i > -1; i--) {
    if (i > pos)
      arr[i + 1] = arr[i];
    else {
      arr[i + 1] = arr[i];
      arr[i] = item;
      break;
    }
  }
  size++;
}

void delete_() {
  int pos;
  printf("Enter position: ");
  scanf("%d", &pos);

  if (pos > size || pos < 0)
    return;
  for (int i = pos; i < size; i++) {
    arr[i] = arr[i + 1];
  }
  size--;
}

int main() {
  int run = 1;
  while (run) {
    printMenu();
    int c;
    scanf("%d", &c);
    switch (c) {
    case 1:
      create();
      break;
    case 2:
      display();
      break;
    case 3:
      insert();
      break;
    case 4:
      delete_();
      break;
    case 5:
      run = 0;
      break;
    default:
      break;
    }
  }
  return 0;
}
