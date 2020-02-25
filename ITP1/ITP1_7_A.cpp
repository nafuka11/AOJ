#include <iostream>
using namespace std;

char get_grade(int score_m, int score_f, int score_r)
{
  if (score_m == -1 || score_f == -1)
  {
    return 'F';
  }
  if (score_m + score_f >= 80)
  {
    return 'A';
  }
  if (score_m + score_f >= 65)
  {
    return 'B';
  }
  if (score_m + score_f >= 50)
  {
    return 'C';
  }
  if (score_m + score_f >= 30)
  {
    if (score_r >= 50)
    {
      return 'C';
    }
    return 'D';
  }
  return 'F';
}

int main()
{
  while (true)
  {
    int score_m, score_f, score_r;
    cin >> score_m >> score_f >> score_r;
    if (score_m == -1 && score_f == -1 && score_r == -1)
    {
      break;
    }
    cout << get_grade(score_m, score_f, score_r) << endl;
  }
}
