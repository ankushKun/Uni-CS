#include <iostream>

using namespace std;

int main() {
  int number;
  cout << "Enter a number: ";
  cin >> number;
  string ns = to_string(number);
  int length = ns.length();
  char temp = ns[0];
  ns[0] = ns[length - 1];
  ns[length - 1] = temp;
  cout << "Number after swapping first and last digit is " << ns << endl;
  return 0;
}
