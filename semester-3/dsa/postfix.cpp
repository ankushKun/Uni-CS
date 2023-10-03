#include <iostream>
using namespace std;

int main() {
  string expr;
  cout << "Enter an expression: ";
  cin >> expr;
  cout << "Expression: " << expr << endl;

  int stack[expr.length()];

  int top = -1;
  for (int i = 0; i < expr.length(); i++) {
    char op = expr[i];
    if (op == '+' || op == '-' || op == '*' || op == '/') {
      int op1 = stack[top];
      cout << "Popped: " << op1 << endl;
      top--;
      int op2 = stack[top];
      cout << "Popped: " << op2 << endl;
      top--;

      cout << "Operation: " << op1 << " " << op << " " << op2 << endl;
      top++;
      if (op == '+') {
        stack[top] = op1 + op2;
      } else if (op == '-') {
        stack[top] = op1 - op2;
      } else if (op == '*') {
        stack[top] = op1 * op2;
      } else if (op == '/') {
        stack[top] = op1 / op2;
      }
      cout << "Pushed: " << stack[top] << endl;
    } else {
      top++;
      stack[top] = expr[i]-48;
      cout << "Pushed: " << expr[i] << endl;
    }
  }

  cout << "Final Result: " << stack[top] << endl;
  return 0;
}
