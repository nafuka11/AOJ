#include <bits/stdc++.h>
using namespace std;

const int ALPHA_LEN = 26;

void count_alpha(int alpha[], const string &line)
{
  for (char c : line)
  {
    if (isalpha(c))
    {
      c = tolower(c);
      alpha[c - 'a']++;
    }
  }
}

void print_alpha(int alpha[])
{
  for (int i = 0; i < ALPHA_LEN; i++)
  {
    cout << (char)('a' + i) << " : " << alpha[i] << endl;
  }
}

int main()
{
  int alpha[ALPHA_LEN] = {};
  string line;
  while (getline(cin, line))
  {
    count_alpha(alpha, line);
  }
  print_alpha(alpha);
}
