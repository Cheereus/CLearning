/*
 * @Description: 
 * @Author: 陈十一
 * @Date: 2020-04-29 10:18:45
 * @LastEditTime: 2020-04-30 10:20:59
 * @LastEditors: 陈十一
 */

#include <iostream>
#include <math.h>
using namespace std;
int checkDigit(double);

int main()
{
  // 循环变量
  double a, b, c;

  cout << "请输入a:" << endl;
  cin >> a;
  if(checkDigit(a) == 1) return 1;
  cout << "请输入b:" << endl;
  cin >> b;
  if(checkDigit(b) == 1) return 1;
  cout << "请输入c:" << endl;
  cin >> c;
  if(checkDigit(c) == 1) return 1;
  
  // 求顶点坐标
  double x, y;
  x = 0 - b / (2 * a);
  y = (4 * a * c - b * b) / (4 * a);
  cout << "顶点坐标为：(" << x << ", " << y << ")" << endl;

  // 韦达定理求零点坐标
  double delta = b * b - 4 * a * c;
  double x1, x2;
  if(delta < 0){
    cout << "函数无零点" << endl;
    return 1;
  } else if(delta == 0){
    x1 = (0 - b) / (2 * a);
    cout << "y = 0时，坐标为：(" << x1 << ", 0)" << endl;
  } else {
    x1 = (0 - b - sqrt(delta)) / (2 * a);
    x2 = (0 - b + sqrt(delta)) / (2 * a);
    cout << "y = 0时，坐标为：(" << x1 << ", 0) 和(" << x2 << ", 0)" << endl;
  }

  
  return 0;
}

// 输入检测
int checkDigit(double n){
  char ch;
  if (n != (double)n || (ch=getchar())!='\n')
  {
    while ((ch = getchar()) != '\n'); //吞掉所有的错误输入
    cin.clear();                      //清空输入缓冲区
    cout << "请输入数值!\n\n";
    return 1;
  } else {
    return 0;
  }
}