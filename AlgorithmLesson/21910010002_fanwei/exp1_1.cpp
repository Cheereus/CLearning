// 整数分划问题

#include <iostream>
using namespace std;
int divideInteger (int n, int m);

int main()
{
  int n;
  cout << "Please enter n: " << endl;
  cin >> n;
  if (n < 1) {
    cout << "Error" << endl;
    return 0;
  } else {
    cout << divideInteger(n, n);
    return 0;
  }
}

int divideInteger (int n, int m) {
  if (n == 1 || m == 1){
    return 1;
  } else if (n < m) {
    return divideInteger(n, n);
  } else if (n == m) {
    return 1 + divideInteger(n, n-1);
  } else {
    return divideInteger(n, m-1) + divideInteger(n-m, m);
  }
}