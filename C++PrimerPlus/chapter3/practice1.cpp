//要求用户以整数输入英寸为单位的身高，将其转换为英尺和英寸

#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
  const int foot = 12;
  int inches = 0;
  cout << "Please enter your height: __ inches:" << endl;
  cin >> inches;
  cout << "Your height is " << inches / foot <<  "feet and " << inches % foot << " inches!" << endl;
  return 0;
}