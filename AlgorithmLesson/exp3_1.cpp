// 取次品问题 完全看不明白且输出结果不正确

#include <iostream>
using namespace std;

int main()
{
  int i, k, n, t;
  long w1, w2;
  cout << "Input the number of boxes: ";
  cin >> n;
  t = 1;
  for (i = 1; i <= n; i++) {
    cout << i << " box take " << t << " units." << endl;
    w1 = w1 + t;
    t = t * 2;
  }
  w1 = w1 * 100;
  cout << "normal weight " << w1 << endl;
  cout << "Input reality weight" << endl;
  cin >> w2;
  w1 = (w1 - w2) / 10;
  while (w1 != 0) {
    k = 0;
    t = 1;
    while (w1 - t >= 0) {
      t = t * 2;
      k = k + 1;
    }
    cout << k << " box is bad" << endl;
    w1 = w1 - t / 2;
  }
}