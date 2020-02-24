#include <iostream>
using namespace std;

#define BUILDING 4
#define FLOOR 3
#define ROOM 10

void print_tenants(int tenants[BUILDING][FLOOR][ROOM], int building)
{
  for (int floor = 0; floor < FLOOR; floor++)
  {
    for (int room = 0; room < ROOM; room++)
    {
      cout << ' ' << tenants[building][floor][room];
    }
    cout << endl;
  }
}

int main()
{
  int tenants[BUILDING][FLOOR][ROOM] = {{{}}};
  int num;
  cin >> num;

  for (int i = 0; i < num; i++)
  {
    int building, floor, room, people;
    cin >> building >> floor >> room >> people;
    tenants[building - 1][floor - 1][room - 1] += people;
  }
  for (int i = 0; i < BUILDING; i++)
  {
    print_tenants(tenants, i);
    if (i != BUILDING - 1)
    {
      cout << "####################" << endl;
    }
  }
}