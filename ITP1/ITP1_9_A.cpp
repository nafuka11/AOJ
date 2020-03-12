#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
  string pattern, word;
  cin >> pattern;

  int ans = 0;
  while (cin >> word)
  {
    if (word == "END_OF_TEXT"s)
    {
      break;
    }
    transform(word.begin(), word.end(), word.begin(), ::tolower);
    if (word == pattern)
    {
      ans++;
    }
  }
  cout << ans << endl;
}
