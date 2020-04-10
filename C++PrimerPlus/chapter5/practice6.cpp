//使用二维数组

#include <iostream>

int main()
{
  using namespace std;
  int sales[3][12] = {
    {1, 3, 4, 5, 7, 7, 7, 7, 7, 10, 11, 12},
    {1, 3, 4, 5, 7, 7, 7, 7, 7, 10, 11, 13},
    {1, 3, 4, 5, 7, 7, 7, 7, 7, 10, 11, 14},
  };

  int sum_by_year[3] = {0, 0, 0};
  int sum_all = 0;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 12; j++) {
      sum_by_year[i] += sales[i][j];
    }
    cout << "Sum by year: " << sum_by_year[i] << endl;
    sum_all += sum_by_year[i];
  }
  cout << "Sum all: " << sum_all << endl;
  return 0;

}