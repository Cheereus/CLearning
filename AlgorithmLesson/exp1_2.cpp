// 从 2 加 22 一直加到 n个2

#include <iostream>
#include <cmath>
using namespace std;
int sumTwos(int n, int m);

int main()
{
  int n;
  cout << "Please enter n: " << endl;
  cin >> n;
  if (n < 1) {
    cout << "Error" << endl;
    return 0;
  } else {
    cout << sumTwos(n, 0) << endl;
    return 0;
  }
}

int sumTwos (int n, int m)
{
  if( n == 0) {
    return 0;
  } else {
    return n*2*pow(10, m)+sumTwos(n-1, m+1);
  }
}