/*
 * @Description: 
 * @Author: 陈十一
 * @Date: 2020-04-17 09:12:17
 * @LastEditTime: 2020-04-17 10:08:47
 * @LastEditors: 陈十一
 */

#include <iostream>
using namespace std;
int star(void);
int blank(void);

int main(){
  // 第一行十个
  for(int i = 0; i < 10; i++){
    star();
  }
  // 中间部分
  cout << endl;
  for(int j = 0; j < 3; j++){
    cout << endl << "*" ;
    for(int k = 0; k < 8; k++){
      blank();
    }
    cout << "*" << endl;
  }
  cout << endl;
  // 最后一行十个
  for(int l = 0; l < 10; l++){
    star();
  }
  return 0;
}

int star(void){
    cout << "*";
    return 0;
}
int blank(void){
    cout << " ";
    return 0;
}