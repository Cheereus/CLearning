//使用 string 类完成练习1

#include <iostream>
#include <string>

int main()
{
  using namespace std;

  string first_name, last_name;
  char grade;
  int age = 0;

  cout << "What is your first name?" << endl;
  getline(cin, first_name);
  cout << "What is your last name?" << endl;
  getline(cin, last_name);
  cout << "What letter grade do you deserve?" << endl;
  cin >> grade;
  cout << "What is your age?" << endl;
  cin >> age;

  grade ++; //与上题不同，这里用了自增运算符达到同样的效果

  cout << "Name: " << last_name << ", " << first_name << endl;
  cout << "Grade: " << grade << endl;
  cout << "Age: " << age << endl;
  return 0;
}