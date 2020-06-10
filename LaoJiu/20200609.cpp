/*
 * @Description: 
 * @Author: 陈十一
 * @Date: 2020-06-09 14:24:03
 * @LastEditTime: 2020-06-09 14:30:12
 * @LastEditors: 陈十一
 */ 

#include <iostream>
#include <math.h>
using namespace std;

int main(){
  double defend;
  for(double i = 100; i <= 1200; i = i + 100){
    defend = (i * 100) / (i + 602);
    cout << "护甲为 " << i << " 时减伤为 " << defend << "%\n";
  }
  return 0;
}
