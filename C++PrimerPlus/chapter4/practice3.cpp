//使用 char 数组和 cstring 头文件进行字符串拼接

#include <iostream>
#include <cstring>

int main()
{
  using namespace std;

  char first_name[20];
  char last_name[20];
  char full_name[45] = ""; 
  //踩坑：一定要初始化，否则输出结果不正确
  const char link[3] = ", ";

  cout << "Enter first name: " << endl;
  cin >> first_name;

  cout << "Enter last name: " << endl;
  cin >> last_name;

  strcat(full_name, first_name);
  strcat(full_name, link);
  strcat(full_name, last_name);

  cout << "Full name is" << full_name << endl;
  return 0;
}