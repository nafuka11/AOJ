#include <iostream>
using namespace std;

int calc_digit_sum(string &num_str)
{
  int sum = 0;
  for (char c : num_str)
  {
    sum += c - '0';
  }
  return sum;
}

int main()
{
  while (true)
  {
    string num_str;
    cin >> num_str;
    if (num_str == "0"s)
    {
      break;
    }
    cout << calc_digit_sum(num_str) << endl;
  }
}
