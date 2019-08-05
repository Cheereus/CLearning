//switch语句

#include <iostream>

int main()
{
  using namespace std;

  char switch_case = ' ';
  cout << "Choose: " << endl << "a" << endl << "b" << endl << "c" << endl << "d" << endl;
  cin >> switch_case;

  switch (switch_case)
  {
    case 'a': cout << "Choosen a" << endl; break;
    case 'b': cout << "Choosen b" << endl; break;
    case 'c': cout << "Choosen c" << endl; break;
    case 'd': cout << "Choosen d" << endl; break;
    default:  cout << "Please choose a - d" << endl;
  }

  return 0;

}
