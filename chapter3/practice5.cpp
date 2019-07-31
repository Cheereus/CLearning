//输入全球人口和国家人口，并计算百分比输出

#include <iostream>
using namespace std;

int main()
{
  long long total = 0;
  long long single = 0;
  cout << "Please enter total population:" << endl;
  cin >> total;
  cout << "Please enter the population of your country:" << endl;
  cin >> single;

  long double double_single = (long double) (single);
  //踩坑：强制类型转换不会修改变量自身，需要一个新变量来存储

  double percent = (double_single / total) * 100;
  //long long 为整型，所以必须将其中一个 long long 强制类型转换为 long double 后才能得到 double 类型结果 

  cout << "The percent is " << percent << endl;
  return 0;
}