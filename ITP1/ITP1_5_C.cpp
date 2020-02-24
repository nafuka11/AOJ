#include <iostream>
using namespace std;

void print_line(int width, bool start_dot)
{
  for (int i = 0; i < width; i++)
  {
    cout << (start_dot ? '.' : '#');
    start_dot = !start_dot;
  }
  cout << endl;
}

void print_chessboard(int height, int width)
{
  for (int i = 0; i < height; i++)
  {
    print_line(width, i % 2);
  }
  cout << endl;
}

int main()
{
  int height, width;

  while (true)
  {
    cin >> height >> width;
    if (height == 0 && width == 0)
    {
      break;
    }
    print_chessboard(height, width);
  }
}
