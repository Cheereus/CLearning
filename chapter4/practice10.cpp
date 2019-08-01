//使用 array 对象创建数组并存入数据

#include <iostream>
#include <array>

int main()
{
  using namespace std;
  array<double, 3> grades;
  cout << "Enter three grades:" << endl;

  double sum = 0;

  for(int i = 0; i < 3; i++){
    cin >> grades[i];
    sum += grades[i];
  }

  cout << "Times: " << 3 << endl << "Average: " << (sum / 3) << endl;
  return 0;

}