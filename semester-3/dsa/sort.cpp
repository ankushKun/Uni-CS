#include <iostream>
using namespace std;

int arr[] = {23, 76, 34, 56, 0, 3, 2};
int l = sizeof(arr) / sizeof(arr[0]);

void selection_sort() {
  int mpos = 0;
  int j;
  for (int i = 0; i < l; i++) {
    for (int j = 0; j < l; j++) {
      if (arr[j] > arr[mpos]) {
        mpos = j;
      }
      int temp = arr[j];
      arr[j] = arr[mpos];
      arr[mpos] = temp;
    }
  }
}

void bubble_sort() {}

void insertion_sort() {}

void merge_sort() {}

void display() {
  for (int i = 0; i < l; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  display();
  selection_sort();
  display();
  return 0;
}
