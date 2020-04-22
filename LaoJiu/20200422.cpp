/*
 * @Description: 
 * @Author: 陈十一
 * @Date: 2020-04-22 09:54:36
 * @LastEditTime: 2020-04-22 10:28:35
 * @LastEditors: 陈十一
 */

#include <iostream>
using namespace std;
int is_leap_year(int);
int year_days(int);

int main(){

  // 非闰年和闰年的每月天数
  int months[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};

  // 小明的出生年月日 月和日是从0开始计数的
  int year1 = 1995;
  int month1 = 6;
  int day1 = 24;
  // 今天
  int year2 = 2020;
  int month2= 3;
  int day2 = 21;
  // 计数
  int days = 0;
  
  // 计算年份差值带来的天数差
  for(int i = year1;i < year2;i++)
    days = days + year_days(i);

  // 去除出生当年已经过去的月份
  for(int j = 0;j < month1;j++)
    days = days - months[is_leap_year(year1)][j];
  
  // 去除出生当月已经过去的天数
  days = days - day1;

  // 加上今年已经过去的月份
  for(int k = 0;k < month2;k++)
    days = days + months[is_leap_year(year2)][k];

  // 加上本月已经过去的天数 并补上当天
  days = days + day2 + 1;

  cout << "已经过了" << days << "天了" << endl;

  return 0;
}

// 判断是否为闰年
int is_leap_year(int y)
{
  if((y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0)))
    return 1;
  else return 0;
}

// 根据闰年判断该年天数
int year_days(int y)
{
  if(is_leap_year(y) == 1) return 366;
  else return 365;
}