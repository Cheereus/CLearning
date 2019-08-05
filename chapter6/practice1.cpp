//读取键盘输入，直到遇到@为止，并回显(数字除外)，并将大写转为小写，小写转为大写

#include <iostream>
#include <cctype>
#include <cstring>

int main()
{
  using namespace std;

  char inputs[100];

  int i = 0;

  cout << "Enter anything: " << endl;

  while ((inputs[i] = cin.get()) != '@' && i < 100) {
    inputs[i] = (isupper(inputs[i]) ?  tolower(inputs[i]) : toupper(inputs[i]));
    i++;
  }

  cout << "Show something: " << endl;

  for (int i = 0; i < strlen(inputs); i++) {
    if (!isdigit(inputs[i])) {
      cout << inputs[i];
    }
  }

  return 0;

}