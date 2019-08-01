//声明一个结构并初始化

#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
  string band;
  double weight;
  int cal;
};

int main()
{
  CandyBar snack;

  cout << "Enter band: " << endl;
  getline(cin, snack.band);

  cout << "Enter weight: " << endl;
  cin >> snack.weight;

  cout << "Enter cal: " << endl;
  cin >> snack.cal;

  cout << snack.band << endl << snack.weight << endl << snack.cal << endl;
  return 0;
}