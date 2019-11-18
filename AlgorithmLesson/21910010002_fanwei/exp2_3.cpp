// 输出魔方阵

#include <iostream>
using namespace std;

int main()
{
  int i, j, i1, j1, x, n, a[100][100];
  cout << "Enter an odd number: " << endl;
  cin >> n;

  if (n % 2 == 0) {
    cout << "input error!";
    return 0;
  }

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n; j++) {
      a[i][j] = 0;
    }
  }
  i = 1;
  j = int ((n + 1) / 2);
  x = 1;
  while (x <= n * n) {
    a[i][j] = x;
    x++;
    i1 = i;
    j1 = j;
    i--;
    j--;
    if (i == 0) i = n;
    if (j == 0) j = n;
    if (a[i][j] != 0) {
      i = i1 + 1;
      j = j1;
    }
  }
  
  for (i = 1; i <= n; i++) {
    cout << endl;
    for (j = 1; j <= n; j++) {
      cout << a[i][j] << " ";
    }
  }
}
