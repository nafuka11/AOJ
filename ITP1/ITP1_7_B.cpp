#include <iostream>
using namespace std;

int count_combination(int num, int sum)
{
  int count = 0;
  for (int i = 1; i < num; i++)
  {
    for (int j = i + 1; j <= num; j++)
    {
      int k = sum - i - j;
      if (k <= j)
      {
        break;
      }
      if (k <= num)
      {
        count++;
      }
    }
  }
  return count;
}

int main()
{
  while (true)
  {
    int num, sum;
    cin >> num >> sum;
    if (num == 0 && sum == 0)
    {
      break;
    }
    cout << count_combination(num, sum) << endl;
  }
}
