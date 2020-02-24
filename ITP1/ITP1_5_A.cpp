#include <iostream>
#include <string>
using namespace std;

void print_rectangle(int h, int w)
{
  for (int i = 0; i < h; i++)
  {
    cout << string(w, '#') << endl;
  }
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
    print_rectangle(H, W);
  }
}
