//使用 new 生成一个结构数组并初始化

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
  CandyBar* snack = new CandyBar;

  cout << "Enter weight: " << endl;
  (cin >> snack -> weight).get(); // 混合输入数字和面向行的字符串会导致问题,需要再进行一次 get()

  cout << "Enter band: " << endl;
  getline(cin, snack -> band);


  cout << "Enter cal: " << endl;
  cin >> snack -> cal;

  cout << snack -> band << endl << snack -> weight << endl << snack -> cal << endl;
  return 0;
}