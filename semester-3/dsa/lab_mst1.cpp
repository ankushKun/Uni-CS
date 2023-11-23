#include <iostream>
using namespace std;

int main() {
  int elem, size;
  cout << "Enter the size of the array: ";
  cin >> size;
  int arr[size];

  for (int i = 0; i < size; i++) {
    cout << "Enter element at position " << i + 1 << ": ";
    cin >> arr[i];
  }

  cout << "Enter element to search for: ";
  cin >> elem;

  int first = 0;
  int last = size;

  while (first <= last) {
    int mid = (first + last) / 2;
    /* cout << "First: " << first << " Last: " << last << " Mid: " << mid << endl; */
    if (arr[mid] == elem) {
      cout << "Found " << elem << " at position " << mid << endl;
      return 0;
    } else if (arr[mid] > elem) {
      last = mid - 1;
    } else if (arr[mid] < elem) {
      first = mid + 1;
    }
  }

  cout << "Element not found" << endl;

  return 0;
}
