#include <iostream>
#include <vector>
using namespace std;

void input_matrix(int n, int m, vector<vector<int>> &matrix)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> matrix.at(i).at(j);
    }
  }
}

void print_result(vector<vector<int>> &a, vector<vector<int>> &b)
{
  for (int n = 0; n < a.size(); n++)
  {
    for (int l = 0; l < b.at(0).size(); l++)
    {
      long long sum = 0;
      for (int m = 0; m < b.size(); m++)
      {
        sum += a.at(n).at(m) * b.at(m).at(l);
      }
      cout << sum;
      if (l != b.at(0).size() - 1)
      {
        cout << ' ';
      }
      else
      {
        cout << endl;
      }
    }
  }
}

int main()
{
  int n, m, l;
  cin >> n >> m >> l;

  vector<vector<int>> a(n, vector<int>(m));
  vector<vector<int>> b(m, vector<int>(l));
  input_matrix(n, m, a);
  input_matrix(m, l, b);

  print_result(a, b);
}
