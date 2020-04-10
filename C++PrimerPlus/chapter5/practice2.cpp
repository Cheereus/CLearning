//使用 array 和 long double 实现100的阶乘

#include <iostream>
#include <array>

int main()
{
  using namespace std;
  const int arr_size = 101;
  array<long double, arr_size> factorials;   
  // array 声明中的 arr_size 必须是常量
  factorials[0] = 1;
  factorials[1] = 1;

  for (int i = 2; i < arr_size; i++) {
    factorials[i] = i * factorials[i - 1];
  }

  for (int i = 0; i < arr_size; i++) {
    cout << factorials[i] << endl;
  }
  return 0;
}