/*
 * @Description: 
 * @Author: 陈十一
 * @Date: 2020-06-17 09:58:14
 * @LastEditTime: 2020-06-17 10:08:20
 * @LastEditors: 陈十一
 */ 

#include <iostream>
using namespace std;
int factorial(int n);

int main(){
  int n;
  cout << "请输入2到13之间的整数：" << endl;
  cin >> n;
  // 判断输入
  if(n < 2 || n > 13){
    cout << "请输入正确的数字！" << endl;
    return 1;
  } 
  else {
    cout << factorial(n) << endl;
  }
  return 0;
}

// 递归实现阶乘函数
int factorial(int n){
  if(n == 1){
    return 1;
  } 
  else {
    return n * factorial(n-1);
  }
}