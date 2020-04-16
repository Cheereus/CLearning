/*
 * @Description: 
 * @Author: 陈十一
 * @Date: 2020-04-16 09:47:23
 * @LastEditTime: 2020-04-16 10:06:38
 * @LastEditors: 陈十一
 */

#include <iostream>
using namespace std;
int turnLight(int);

int main(){
  // 灯的状态，1 为开，0 为关
  int light = 1;
  // 第一次拉了两下
  for(int i = 0; i < 2; i++){
    light = turnLight(light);
  }
  // 第二次拉了三下
  for(int j = 0; j < 3; j++){
    light = turnLight(light);
  }
  if(light == 0){
    cout << "灯是关的" << endl;
  } else {
    cout << "灯是开的" << endl;
  }
  return 0;
}

int turnLight(int status){
  if(status == 0){
    status = 1;
  } else {
    status = 0;
  }
  return status;
}