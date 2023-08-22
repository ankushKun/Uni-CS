#include <iostream>

using namespace std;

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int elem = 8;

  int first = 0;
  int last = sizeof(arr) / sizeof(arr[0]);

  while (1) {
    int mid = (first + last) / 2;
    if (arr[mid] > elem) {
      last = mid;
    } else if (arr[mid] < elem) {
      first = mid;
    } else if (arr[mid] == elem) {
      cout << "Found at position " << mid << endl;
      return 0;
    }
  }
  cout << "Didnot find element" << endl;
  return 0;
}
