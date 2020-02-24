#include <iostream>
#include <string>
using namespace std;

void print_frame(int h, int w)
{
  cout << string(w, '#') << endl;
  for (int i = 1; i < h - 1; i++)
  {
    cout << '#' << string(w - 2, '.') << '#' << endl;
  }
  cout << string(w, '#') << endl;
  cout << endl;
}

int main()
{
  int H, W;
  while (true)
  {
    cin >> H >> W;
    if (H == 0 && W == 0)
    {
      break;
    }
    print_frame(H, W);
  }
}
