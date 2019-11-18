// 给余猜数

#include <iostream>
using namespace std;

int main()
{
  int a, b, c, d;
  cout << "Please think of a number between 1 and 100" << endl
  << "your number divided by 3 has a remainder of: " << endl;
  cin >> a;
  cout << "your number divided by 4 has a remainder of: " << endl;
  cin >> b;
  cout << "your number divided by 7 has a remainder of: " << endl;
  cin >> c;
  cout << "Let me think a moment..." << endl;
  d = 28 * a + 21 * b + 36 * c;
  while (d > 100) {
    d = d - 84;
  }
  cout << "Your number is " << d << endl; 
}