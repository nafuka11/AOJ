#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int size;
  cin >> size;
  vector <int> nums(size);
  for (int i = 0; i < size; i++)
  {
    cin >> nums.at(i);
  }
  for (int i = size - 1; i >= 0; i--)
  {
    cout << nums.at(i);
    if (i != 0)
    {
      cout << ' ';
    }
  }
  cout << endl;
}