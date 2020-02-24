#include <iostream>
#include <vector>
using namespace std;

void get_card_index(int &type, int &rank)
{
  char t;
  int r;
  cin >> t >> r;
  switch (t)
  {
    case 'S':
      type = 0;
      break;
    case 'H':
      type = 1;
      break;
    case 'C':
      type = 2;
      break;
    case 'D':
      type = 3;
      break;
  }
  rank = r - 1;
}

void print_card(int type, int rank)
{
  switch (type)
  {
    case 0:
      cout << 'S';
      break;
    case 1:
      cout << 'H';
      break;
    case 2:
      cout << 'C';
      break;
    case 3:
      cout << 'D';
      break;
  }
  cout << ' ' << rank + 1 << endl;
}

int main()
{
  vector<vector<bool>> cards(4, vector<bool>(13));
  int num;
  cin >> num;
  for (int i = 0; i < num; i++)
  {
    int type, rank;
    get_card_index(type, rank);
    cards.at(type).at(rank) = true;
  }
  for (int i = 0; i < cards.size(); i++)
  {
    for (int j = 0; j < cards.at(0).size(); j++)
    {
      if (!cards.at(i).at(j))
      {
        print_card(i, j);
      }
    }
  }
}
