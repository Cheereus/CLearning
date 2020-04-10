//声明一个结构并初始化之

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
  CandyBar snack = {
    "Mocha Munch",
    2.3,
    350
  };

  cout << snack.band << endl << snack.weight << endl << snack.cal << endl;
  return 0;
}