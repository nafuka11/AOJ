#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int h, w;
  cin >> h >> w;
  vector<vector<int>> a(h, vector<int>(w));
  vector<int> b(w);
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      cin >> a.at(i).at(j);
    }
  }
  for (int i = 0; i < w; i++)
  {
    cin >> b.at(i);
  }

  for (int i = 0; i < h; i++)
  {
    int ans = 0;
    for (int j = 0; j < w; j++)
    {
      ans += a.at(i).at(j) * b.at(j);
    }
    cout << ans << endl;
  }
}
