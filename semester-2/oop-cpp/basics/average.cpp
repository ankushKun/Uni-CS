#include <iostream>

using namespace std;

int main() {
  int sum=0, subs, average;
  cout << "Enter number of subjects ";
  cin >> subs;
  cout << "Enter marks for "<<subs<<" subjects: ";
  for (int i =0;i<subs;i++) {
    int marks;
    cin >> marks;
    sum += marks;
  }
  average = sum/subs;
  cout << "Average marks is " << average << endl;
  return 0;
}
