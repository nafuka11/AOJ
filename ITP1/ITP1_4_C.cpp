#include <iostream>
using namespace std;

void print_calc_result(int a, int b, char op)
{
  if (op == '+')
  {
    cout << a + b << endl;
  }
  if (op == '-')
  {
    cout << a - b << endl;
  }
  if (op == '*')
  {
    cout << a * b << endl;
  }
  if (op == '/')
  {
    cout << a / b << endl;
  }
}

int main()
{
  int a, b;
  char op;
  while (true)
  {
    cin >> a >> op >> b;
    if (op == '?')
    {
      break;
    }
    print_calc_result(a, b, op);
  }
}
