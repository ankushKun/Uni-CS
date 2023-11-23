#include <iostream>
using namespace std;

int main() {
  int s, x;
  cout << "Enter size of input array: ";
  cin >> s;
  int arr[s];
  cout << "Enter items in ascending order" << endl;
  for (int i = 0; i < s; i++) {
    cout << "Enter item for position " << (i + 1) << ": ";
    cin >> arr[i];
  }
  cout << "Enter item to search for: ";
  cin >> x;
  int l = 0, h = s - 1;
  int m = (l + h) / 2;
  while (l < h) {
    int m = (l + h) / 2;
    if (arr[m] == x) {
      cout << "Element " << x << " found at position " << (m + 1) << endl;
      return 0;
    }
    if (arr[m] > x) {
      h = m - 1;
    } else {
      l = m + 1;
    }
  }

  cout << "Element " << x << " not found in array" << endl;

  return 0;
}
