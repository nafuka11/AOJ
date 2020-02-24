#include <iostream>
using namespace std;

int main()
{
  int n;
  int min_n = 1000001;
  int max_n = -1000001;
  long long sum = 0;

  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    min_n = min(min_n, a);
    max_n = max(max_n, a);
    sum += a;
  }
  cout << min_n << " " << max_n << " " << sum << endl;
}
