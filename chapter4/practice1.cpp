//请求输入名字，成绩，年龄等，并输出(需要向下调整成绩)

#include <iostream>

int main()
{
  using namespace std;

  char first_name[20];
  char last_name[20];
  char grade;
  int age = 0;
  cout << "What is your first name?" << endl;
  cin >> first_name;
  cout << "What is your last name?" << endl;
  cin >> last_name;
  cout << "What letter grade do you deserve?" << endl;
  cin >> grade;
  cout << "What is your age?" << endl;
  cin >> age;

  char next_grade = grade + 1;  
  //grade自增1即可获得下个字母的ASCII码，将其赋给char即可获得相应字符
  //若直接输出 grade+1 会输出该ASCII码

  cout << "Name: " << last_name << ", " << first_name << endl;
  cout << "Grade: " << next_grade << endl;
  cout << "Age: " << age << endl;
  return 0;
  
}