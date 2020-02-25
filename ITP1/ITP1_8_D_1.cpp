// ITP1_8_D 解1: 1文字ずつpattern検索。textは%演算子でindexをループさせる
#include <iostream>
using namespace std;

int main()
{
  string s, p;
  cin >> s >> p;
  bool ans = false;
  for (int i = 0; i < s.size(); i++)
  {
    bool match = true;
    for (int j = 0; j < p.size(); j++)
    {
      if (p.at(j) != s.at((i + j) % s.size()))
      {
        match = false;
        break;
      }
    }
    if (match)
    {
      ans = true;
      break;
    }
  }
  if (ans)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}
