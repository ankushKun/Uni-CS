#include <iostream>

using namespace std;

class Employee {
  char Name[50];
  int Age;
  char Desg[50];
  long Salary;

public:
  void GetData();
  void PutData();
};

void Employee::GetData() {
  cout << "Enter Employee Name : ";
  cin >> Name;
  cout << "Enter Employee Age : ";
  cin >> Age;
  cout << "Enter Employee Designation:";
  cin >> Desg;
  cout << "Enter Employee Salary : ";
  cin >> Salary;
}

void Employee::PutData() {
  cout << "\nEmployee Designation:" << Desg;
  cout << "\nEmployee Salary : " << Salary;
}

int main() {
  Employee E[5];
  int i;
  for (i = 0; i < 5; i++) {
    E[i].GetData();
  }
  for (i = 0; i < 5; i++) {
    E[i].PutData();
  }
  return 0;
}
