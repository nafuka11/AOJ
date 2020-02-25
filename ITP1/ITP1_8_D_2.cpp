// ITP1_8_D 解2: Hint通り、sを加工（s+s）しfindする
#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s, p;
  cin >> s >> p;
  s += s;
  if (s.find(p) != string::npos)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}
