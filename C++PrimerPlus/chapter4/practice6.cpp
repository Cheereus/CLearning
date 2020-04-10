//声明一个结构数组并初始化之

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

  CandyBar snacks[3] = {
    {
      "Mocha Munch A",
      2.3,
      350
    },
    {
      "Mocha Munch",
      2.311,
      350
    },
    {
      "Mocha Munch",
      2.3,
      550
    },
  };

  cout << snacks[0].band << endl << snacks[1].weight << endl << snacks[2].cal << endl;
  return 0;
}