//输入度分秒，以度数输出

#include <iostream>
using namespace std;

int main()
{
  const int minutes_per_degree = 60;
  const int seconds_per_minute = 60;

  int degrees = 0;
  double minutes = 0;
  double seconds = 0;
  cout << "Enter the degrees:" << endl;
  cin >> degrees;
  cout << "Enter the minutes:" << endl;
  cin >> minutes;
  cout << "Enter the seconds:" << endl;
  cin >> seconds;

  double seconds_to_minutes = seconds / seconds_per_minute; 
  //踩坑：int除以int一定得到整数(即使结果将会赋值给double)，因此上句参与运算的两个数必须要有一个是非int类型，否则上句结果为0
  cout << "seconds_to_minutes: " << seconds_to_minutes << endl; 
  double minutes_to_degrees = (minutes + seconds_to_minutes) / minutes_per_degree;
  cout << "minutes: " << minutes + seconds_to_minutes << endl; 
  double final_degrees = degrees + minutes_to_degrees;
  cout << degrees << " degrees " << minutes << " minutes " << seconds << " seconds = " 
       << final_degrees << " degrees" << endl;
  return 0;
}