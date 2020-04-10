//用户输入两个整数，求出两个整数之间(包括这两个数)的所有整数的和

#include <iostream>

int main()
{
  using namespace std;
  int min = 0;
  int max = 0;
  int sum = 0;
  cout << "Enter min: " << endl;
  cin >> min;
  cout << "Enter max: " << endl;
  cin >> max;

  if (min > max) {
    int tmp = max;
    max = min;
    min = tmp;
  }

  for (int i = min; i <= max; i++) {
    sum += i;
  }

  cout << "Sum is: " << sum << endl;
  return 0;

}