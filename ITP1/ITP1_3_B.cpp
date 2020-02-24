#include <iostream>
using namespace std;

int main()
{
  int num;
  int i = 1;
  while (true)
  {
    cin >> num;
    if (!num)
    {
      break;
    }
    cout << "Case " << i << ": " << num << endl;
    i++;
  }
}