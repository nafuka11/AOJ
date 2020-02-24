#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> nums(3);
  for (int i = 0; i < nums.size(); i++)
  {
    cin >> nums.at(i);
  }
  sort(nums.begin(), nums.end());
  cout << nums.at(0) << " " << nums.at(1) << " " << nums.at(2) << endl;
}