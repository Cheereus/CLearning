// 输出螺旋阵 算法一

#include <iostream>
using namespace std;

int main()
{
  int i, j, a[100][100], n, k;
  cout << "Enter n: " << endl;
  cin >> n;
  k = 1;

  for (i = 1; i <= n/2; i++) {
    for (j = i; j <= n - i; j++) {
      a[j][i] = k;
      k++;
    }
    for (j = i; j <= n - i; j++) {
      a[n + 1 - i][j] = k;
      k++;
    }
    for (j = n - i + 1; j >= i + 1; j--) {
      a[j][n + 1 - i] = k;
      k++;
    }
    for (j = n - i + 1; j >= i + 1; j--) {
      a[i][j] = k;
      k++;
    }
  }

  if (n % 2 == 1) {
    i = (n + 1) / 2;
    a[i][i] = n * n;
  }

  for (i = 1; i <= n; i++) {
    cout << endl;
    for (j = 1; j <= n; j++) {
      cout << a[i][j] << " ";
    }
  }
}
