//使用 string 对象和 string 头文件实现上题

#include <iostream>
#include <string>

int main()
{
  using namespace std;

  string first_name = "";
  string last_name = "";
  string link = ", ";
  cout << "Enter your first name:" << endl;
  getline(cin, first_name);
  cout << "Enter your last name:" << endl;
  getline(cin, last_name);

  string full_name = first_name + link + last_name;

  cout << "Your full name is: " << full_name << endl;
}