#include <iostream>

using namespace std;

int main() {
  int farenheit;
  cout << "Enter the temperature in farenheit: ";
  cin >> farenheit;

  int celsius = (farenheit - 32) * 5 / 9;

  cout << "The temperature in celsius is: " << celsius << endl;

  return 0;
}
