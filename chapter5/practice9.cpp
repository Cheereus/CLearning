//使用 string 实现上题

#include <iostream>
#include <string>

int main()
{
  using namespace std;
  string words;
  int num = 0;

  cin >> words;

  while (words != "done") {
    num ++;
    cin >> words;
  }

  cout << "Words: " << num << endl;
  return 0;
}