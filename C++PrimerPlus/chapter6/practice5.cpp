//个税计算器

#include <iostream>

int main()
{
  using namespace std;
  
  double tvarps = 0;
  cout << "Enter tvarps: " << endl;
  cin >> tvarps;

  const double tax1 = 0.1;
  const double tax2 = 0.15;
  const double tax3 = 0.2;
  double tax = 0;

  if (tvarps <= 5000) {
    tax = 0;
  } else if (tvarps <= 15000 ) {
    tax = (tvarps - 5000) * tax1;
  } else if (tvarps <= 35000 ) {
    tax = 10000 * tax1 + (tvarps - 15000) * tax2;
  } else {
    tax = 10000 * tax1 + 20000 * tax2 + (tvarps - 35000) * tax3;
  }

  cout << tax3 << endl;
  return 0;

}