/*
 * @Description: 
 * @Author: 陈十一
 * @Date: 2020-04-23 09:51:24
 * @LastEditTime: 2020-04-23 10:04:05
 * @LastEditors: 陈十一
 */

#include <iostream>
using namespace std;

int main()
{
  // 循环变量
  int i, j;

  // 外循环为每行
  for(i = 1; i < 10; i++){

    // 内循环为每列
    for(j = 1; j <= i; j++){
      cout << i << " * " << j << " = " << i*j << "\t"; 
    }
    cout << endl; 
  }
  return 0;
}