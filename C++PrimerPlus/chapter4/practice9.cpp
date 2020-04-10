//使用 new 生成一个结构数组并初始化之

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

  CandyBar* snacks = new CandyBar [3];

  snacks[0] = {
      "Mocha Munch A",
      2.3,
      350
  };

  snacks[1] = {
      "Mocha Munch A",
      2.3111,
      350
  };

  snacks[2] = {
      "Mocha Munch A",
      2.3111,
      550
  };

  cout << snacks[0].band << endl << snacks[1].weight << endl << snacks[2].cal << endl;
  return 0;
}