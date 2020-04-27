/*
 * @Description: 
 * @Author: 陈十一
 * @Date: 2020-04-27 09:45:10
 * @LastEditTime: 2020-04-27 10:03:03
 * @LastEditors: 陈十一
 */


#include <iostream>
using namespace std;

int main()
{
  // 条件表达式 ? 表达式1 : 表达式2;
  bool condition = true;
  int state = condition ? 0 : 1;
  // state = 0;
  // 如果“条件表达式”为true，则整个表达式的值就是表达式1，忽略表达式2；
  // 如果“条件表达式”为false，则整个表达式的值就是表达式2，忽略表达式1。等价于以下if/else语句
  return 0;
}