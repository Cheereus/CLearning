//结构数组的创建和输入输出

#include <iostream>
#include <string>

using namespace std;

struct car
{
  string band;
  int year;
};

int main()
{
  int arr_size = 0;
  cout << "Enter numbers: " << endl;
  (cin >> arr_size).get();    //此处不加 get() 会影响下面第一次输入
  car* my_cars = new car [arr_size];

  for (int i = 0; i < arr_size; i++) {
    cout << "Enter band: " << endl;
    getline(cin, my_cars[i].band);
    cout << "Enter year: " << endl;
    (cin >> my_cars[i].year).get();
  }

  cout << "You have entered: " << endl;
  for (int i = 0; i < arr_size; i++) {
    cout << my_cars[i].band << " " << my_cars[i].year << endl;
  }
  return 0;

}