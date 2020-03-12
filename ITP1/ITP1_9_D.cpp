#include <iostream>
#include <string>
using namespace std;

void query_print(string &str, int start, int end)
{
  int len = end - start + 1;
  cout << str.substr(start, len) << endl;
}

void query_reverse(string &str, int start, int end)
{
  int len = end - start + 1;
  for (int i = 0; i < len / 2; i++)
  {
    char tmp = str.at(start + i);
    str.at(start + i) = str.at(end - i);
    str.at(end - i) = tmp;
  }
}

void query_replace(string &str, int start, string replace_str)
{
  for (int i = 0; i < replace_str.size(); i++)
  {
    str.at(start + i) = replace_str.at(i);
  }
}

void query(string &str)
{
  string order;
  int start, end;
  cin >> order >> start >> end;

  if (order == "print")
  {
    query_print(str, start, end);
  }
  else if (order == "reverse"s)
  {
    query_reverse(str, start, end);
  }
  else if (order == "replace"s)
  {
    string replace_str;
    cin >> replace_str;
    query_replace(str, start, replace_str);
  }
}

int main()
{
  string str;
  int query_num;
  cin >> str >> query_num;

  for (int i = 0; i < query_num; i++)
  {
    query(str);
  }
}
