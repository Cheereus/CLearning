// 吉普车过沙漠问题

#include <iostream>
using namespace std;

int main()
{
  int dis, k, oil;
  dis = 500;
  k = 1;
  oil = 500;

  do {
    cout << "storepoint " << k << " distance " << 1000 - dis << " oilquantity " << oil << endl;
    k++;
    dis = dis + 500 / (2 * k - 1);
    oil = 500 * k; 
  } while (dis < 1000);
  oil = 500 * (k - 1) + (1000 - dis) * (2 * k - 1);

  return 0;
}