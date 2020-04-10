//计算单利和复利

#include <iostream>

int main()
{
  using namespace std;
  double daphne = 100;
  double cleo = 100;
  double daphne_profit = 10;
  double cleo_profit = 0.05;
  int year = 1;

  while (daphne >= cleo) {
    daphne += daphne_profit;
    cleo = cleo + cleo * cleo_profit;
    year ++;
  }
  cout << "Year: " << year << endl;
  cout << "Daphne: " << daphne << endl;
  cout << "Cleo: " << cleo << endl;
  return 0;
}