#include <iostream>
#include <memory>

using namespace std;

int main() {
  int m, n, base;
  cout << "Enter the number of rows: ";
  cin >> m;
  cout << "Enter the number of columns: ";
  cin >> n;

  int matrix[m][n];
  cout << "Enter the elements of the matrix: " << endl;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> matrix[i][j];
    }
  }

  cout << "Enter the base address: ";
  cin >> base;

  int last_address = base + m * n * sizeof(matrix[0][0]);

  cout << "The last address is: " << last_address << endl;

  return 0;
}
