#include <iostream>
#include <vector>
using namespace std;

void print_sheet(vector<vector<int>> &sheet)
{
  for (int r = 0; r < sheet.size(); r++)
  {
    for (int c = 0; c < sheet.at(0).size(); c++)
    {
      cout << sheet.at(r).at(c);
      if (c != sheet.at(0).size() - 1)
      {
        cout << ' ';
      }
    }
    cout << endl;
  }
}

int main()
{
  int row, column;
  cin >> row >> column;

  vector<vector<int>> sheet(row + 1, vector<int>(column + 1));
  for (int r = 0; r < row; r++)
  {
    int sum = 0;
    for (int c = 0; c < column; c++)
    {
      cin >> sheet.at(r).at(c);
      sum += sheet.at(r).at(c);
    }
    sheet.at(r).at(column) = sum;
  }
  for (int c = 0; c < column + 1; c++)
  {
    int sum = 0;
    for (int r = 0; r < row; r++)
    {
      sum += sheet.at(r).at(c);
    }
    sheet.at(row).at(c) = sum;
  }

  print_sheet(sheet);
}
