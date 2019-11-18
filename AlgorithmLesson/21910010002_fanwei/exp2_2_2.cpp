// 输出螺旋阵 算法二

#include <iostream>
using namespace std;

int main()
{
  int i, j, k, n, a[100][100], b[2], x, y, t;
  cout << "Enter n: " << endl;
  cin >> n;

  b[0] = 0;
  b[1] = 1;
  k = n;
  t = 1;
  x = 1;

  while (x <= n * n) {
    for (y = 1; y <= 2 * k - 1; y++) {
      b[y / (k + 1)] = b[y / (k + 1)] + t;
      a[b[0]][b[1]] = x;
      x++;
    }
    k--;
    t = -t;
  }
  
  for (i = 1; i <= n; i++) {
    cout << endl;
    for (j = 1; j <= n; j++) {
      cout << a[i][j] << " ";
    }
  }
}
