#include <iostream>
using namespace std;

bool is_printable(int num)
{
  if (num % 3 == 0)
  {
    return true;
  }
  while (num)
  {
    if (num % 10 == 3)
    {
      return true;
    }
    num /= 10;
  }
  return false;
}

int main()
{
  int num;
  cin >> num;

  for (int i = 1; i <= num; i++)
  {
    if (is_printable(i))
    {
      cout << " " << i;
    }
  }
  cout << endl;
}
