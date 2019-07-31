//耗油量转换

#include <iostream>
using namespace std;

int main()
{
  const double miles_per_100km = 62.14;
  const double liters_per_gallon = 3.875;
  double eu_fuel_consumption = 0;
  double us_fuel_consumption = 0;
  cout << "Enter fuel consumption by eu: __ liters per 100km" << endl;
  cin >> eu_fuel_consumption;
  us_fuel_consumption = miles_per_100km / (eu_fuel_consumption / liters_per_gallon);
  cout << "Fuel consumption by us is " << us_fuel_consumption << " miles per gallon" << endl;
  return 0;
}