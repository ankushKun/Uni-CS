#include <iostream>

using namespace std;

int main() {
  int size, elem;

  cout << "Enter size of array: ";
  cin >> size;

  int arr[size];
  for (int i = 0; i < size; i++) {
    cout << "Enter element " << (i + 1) << ": ";
    cin >> arr[i];
  }

  cout << "Enter element to find: ";
  cin >> elem;

  int first = 0;
  int last = size;

  while (first < last) {
    int mid = (first + last) / 2;

    if (arr[mid] == elem) {
      cout << "Found " << elem << " at position " << mid << endl;
      return 0;
    } else if (arr[mid] < elem) {
      first = mid + 1;
    } else if (arr[mid] > elem) {
      last = mid - 1;
    }
  }

  cout << "Didnot find element " << elem << endl;
  return 0;
}
