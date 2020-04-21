/*
 * @Description: 
 * @Author: 陈十一
 * @Date: 2020-04-21 09:55:22
 * @LastEditTime: 2020-04-21 10:12:26
 * @LastEditors: 陈十一
 */

#include <iostream>
using namespace std;

int main(){

  // n 为菱形尺寸 i,j 为循环参数
  int i,j,n;
  
  cout << "请输入菱形尺寸：" << endl;
  cin >> n;
  char ch;

  // 输入检测
  if (n != (int)n || (ch=getchar())!='\n')
  {
    while ((ch = getchar()) != '\n'); //吞掉所有的错误输入
    cin.clear();                      //清空输入缓冲区
    cout << "请输入整数!\n\n";
    return 1;
  }

  // 打印第一行单独的 *
  for(i=1;i<=n;i++)
    cout<<" ";
  cout<<"*"<<endl;

  // 循环打印中间上半部分
  for(i=1; i<=n; i++)
  {
    for(j=1; j<=n-i; j++)
    {
      cout<<" ";
    }
    for(j=1; j<=2; j++)
    {
      cout<<"*";
      for(j=1; j<=2*i-1; j++)
      {
        cout<<" ";
      }
      cout<<"*";
    }
    cout<<endl;
  }
  // 循环打印中间下半部分
  for(i=n-1; i>=1; i--)
  {
    for(j=1; j<=n-i; j++)
    {
      cout<<" ";
    }
    for(j=1; j<=2; j++)
    {
      cout<<"*";
      for(j=1; j<=2*i-1; j++)
      {
        cout<<" ";
      }
      cout<<"*";
    }
    cout<<endl;
  }
  //打印最后一行单独的 *
  for(i=1;i<=n;i++)
      cout<<" ";
  cout<<"*"<<endl;
  
  return 0;
}