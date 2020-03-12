#include <string>
#include <iostream>
using namespace std;

void shuffle_cards(string cards)
{
  int shuffle_num;
  cin >> shuffle_num;
  for (int i = 0; i < shuffle_num; i++)
  {
    int shuffle;
    cin >> shuffle;
    cards = cards.substr(shuffle) + cards.substr(0, shuffle);
  }
  cout << cards << endl;
}

int main()
{
  string cards;
  while (true)
  {
    cin >> cards;
    if (cards == "-"s)
    {
      break;
    }
    shuffle_cards(cards);
  }
}
