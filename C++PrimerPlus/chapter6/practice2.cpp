//读取最多十个double值，遇到非数字时结束输入，并输出平均值和多少个数字大于平均值

#include <iostream>
#include <array>
#include <cctype>

int main()
{
  using namespace std;
  array<double, 10> donation;

  double sum;
  int i = 0;

  while (i < 10 && (cin >> donation[i])) {
    sum += donation[i];
    i++;
  }

  double avg = sum / i;
  int count = 0;

  for (int j = 0; j < 10; j ++) {
    if (donation[j] > avg) {
      count ++;
    }
  }

  cout << "Avg = " << avg << endl << "Big num " << count << endl;

  return 0;
  
}