// 按月输入销量，并计算总数
#include <iostream>
#include <string>
#include <sstream>

int main()
{
  using namespace std;

  const int arr_size = 12;
  stringstream* months = new stringstream [arr_size];
  string di = "Sale num of ";
  string xl = " month";
  int sales[arr_size];

  for (int i = 0; i < arr_size; i++) {
    months[i] << di << (i + 1) << xl;
    cout << months[i].str() << endl;
    cin >> sales[i];
  }

  //字符串拼接时出现了很多问题: 
  //首先是使用 to_string() 编译报错
  //其次采用 stringstream 实现时不能直接使用字符串常量进行拼接, 一定要先声明并初始化 string 类型的字符串
  //关于字符串拼接可参考 https://blog.csdn.net/PROGRAM_anywhere/article/details/63720261

  int sum = 0;

  for (int i = 0; i < arr_size; i ++) {
    sum += sales[i];
    cout << months[i].str() << "is " << sales[i] << endl;
  }

  cout << "Sum is " << sum << endl;
  return 0;

}
