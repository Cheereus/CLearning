// 象棋算式问题

#include <iostream>
using namespace std;

int main()
{
  int a, b, c, d, e, m, n, s;
  for (a = 1; a <= 9; a++) {
    for (b = 0; b <= 9; b++) {
      for (c = 0; c <= 9; c++) {
        for (d = 0; d <= 9; d++) {
          for (e = 0; e <= 9; e++) {
            if (a == b || a == c || a == d || 
                a == e || b == c || b == d || 
                b == e || c == d || c == e || 
                d == e) continue;
            else {
              m = a * 1000 + b * 100 + c * 10 + d;
              n = a * 1000 + b * 100 + e * 10 + d;
              s = e * 10000 + d * 1000 + c * 100 + a * 10 + d;
              if (m + n == s) {
                cout << "兵:" << a << endl
                     << "炮:" << b << endl
                     << "马:" << c << endl
                     << "卒:" << d << endl
                     << "车:" << e;
              }
            }
          }
        }
      }
    }
  }
}