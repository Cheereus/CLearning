//耗油量计算

#include <iostream>
using namespace std;

int main()
{
  int calc_type = 0;
  cout << "Enter 1 or 2 to choose type:" << endl; 
  cout << "1 - miles/gallon" << endl;
  cout << "2 - liters/100km" << endl;
  cin >> calc_type;

  if (calc_type == 1) {
    double miles = 0;
    double gallons = 0;
    cout << "Enter miles and gallons:" << endl;
    cin >> miles;
    cin >> gallons;
    cout << "The fuel consumption is " << miles / gallons << " miles per gallon" << endl;
    return 0;
  } else if (calc_type == 2) {
    double kms = 0;
    double liters = 0;
    cout << "Enter kms and liters:" << endl;
    cin >> kms;
    cin >> liters;
    cout << "The fuel consumption is " << (liters * 100) / kms << " liters per 100km" << endl;
    return 0;
  } else {
    cout << "Invalid input" << endl;
    return 0;
  }
}