// 求120的阶乘 有bug待解决

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  long a[256], b, d;
  int m, n, i, j, r;
  cout << "Enter n: " << endl;
  cin >> n;

  m = log(n) * n/6 + 2;
  a[1] = 1;
  for (i = 2; i <= m; i++) {
    a[i] = 0;
  }

  d = 0;
  for (i = 2; i <= n; i++) {
    for (j = 1; j <= m; j++) {
      b = a[j] * i + d;
      a[j] = b % 1000000;
      d = b / 1000000;
    }
    if (d != 0) {
      a[j] = d;
    }
  }
  for (i = m; i >= 1; i--) {
    if (a[i] = 0){
      continue;
    } else {
      r = i;
      break;
    }
  }
  cout << n << "!=" << a[r] << " ";

  for (i = r - 1; i >= 1; i--) {
    if (a[i] > 99999) {
      cout << a[i] << "";
      continue;
    }
    if (a[i] > 9999) {
      cout << 0 << a[i] << "";
      continue;
    }
    if (a[i] > 999) {
      cout << 00 << a[i] << "";
      continue;
    }
    if (a[i] > 99) {
      cout << 000 << a[i] << "";
      continue;
    }
    if (a[i] > 9) {
      cout << 0000 << a[i] << "";
      continue;
    }
    cout << 00000 << a[i] << "";
  }
}