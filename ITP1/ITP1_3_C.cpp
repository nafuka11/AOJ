#include <iostream>
using namespace std;

int main()
{
  int x, y;
  while (true)
  {
    cin >> x >> y;
    if (!x && !y)
    {
      break;
    }
    if (x > y)
    {
      cout << y << " " << x << endl;
    }
    else
    {
      cout << x << " " << y << endl;
    }
  }
}