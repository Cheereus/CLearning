//根据输入数字来输出星号

#include <iostream>

int main()
{
  using namespace std;
  int lines = 0;

  cout << "Enter lines: " << endl;
  cin >> lines;

  for (int i = 1; i <= lines; i++) {
    for (int j = 0; j < lines - i; j++) {
      cout << ".";
    }
    for (int k = 0; k < i; k++){
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}