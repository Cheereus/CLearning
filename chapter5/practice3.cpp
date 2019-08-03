//即时输出用户输入的所有数的和，输入 0 时结束

#include <iostream>

int main()
{
  using namespace std;
  double tmp;
  double sum = 0;

  cin >> tmp;

  while (tmp) {
    sum += tmp;
    cout << "Now sum is " << sum << endl;
    cin >> tmp;
  }
}