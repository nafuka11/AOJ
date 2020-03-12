#include <iostream>
#include <string>
using namespace std;

void play_card_game(int &taro_win, int &hanako_win)
{
  string taro, hanako;
  cin >> taro >> hanako;
  if (taro > hanako)
  {
    taro_win += 3;
  }
  else if (taro < hanako)
  {
    hanako_win += 3;
  }
  else
  {
    taro_win++;
    hanako_win++;
  }
}

int main()
{
  int taro_win = 0;
  int hanako_win = 0;

  int game_count;
  cin >> game_count;
  for (int i = 0; i < game_count; i++)
  {
    play_card_game(taro_win, hanako_win);
  }
  cout << taro_win << ' ' << hanako_win << endl;
}
