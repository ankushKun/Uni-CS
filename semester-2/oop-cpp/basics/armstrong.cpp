#include <iostream>
#include <math.h>

using namespace std;

bool isArmstrong(int n) {
  int sum = 0;
  int len = to_string(n).length();
  for (int temp = n; n > 0; n /= 10) {
    int lastDigit = temp % 10;
    sum += pow(lastDigit, len);
  }
  return (n == sum);
}

int main() {
  int n;
  cout << "Enter a number : ";
  cin >> n;

  if (isArmstrong(n)) {
    cout << n << " is an Armstrong number" << endl;
  } else {
    cout << n << " is not an Armstrong number" << endl;
  }

  return 0;
}
