#include <iostream>
#include <cctype>
using namespace std;

int main()
{
  string line;
  getline(cin, line);

  for (char c : line)
  {
    if (islower(c))
    {
      c = toupper(c);
    }
    else if (isupper(c))
    {
      c = tolower(c);
    }
    cout << c;
  }
  cout << endl;
}
