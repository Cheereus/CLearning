/*
 * @Description: 
 * @Author: 陈十一
 * @Date: 2020-04-20 09:55:07
 * @LastEditTime: 2020-04-20 10:03:31
 * @LastEditors: 陈十一
 */

#include <iostream>
using namespace std;

int main(){
  double radius = 0;
  double pi = 3.141592654;
  
  cout << "请输入圆的半径：" << endl;
  cin >> radius;

  // 面积
  double s = pi * radius * radius;
  // 周长
  double l = 2 * pi * radius;
  
  cout << "圆的周长为：" << l << endl;
  cout << "圆的面积为：" << s << endl;
  
  return 0;
}