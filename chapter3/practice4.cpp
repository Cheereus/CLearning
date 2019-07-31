//整数方式输入秒数，然后以天时分秒的方式输出

#include <iostream>
using namespace std;

int main()
{
  const int hours_per_day = 24;
  const int minutes_per_hour = 60;
  const int seconds_per_minute = 60;

  long long time_by_seconds = 0;
  cout << "Please enter time by seconds:" << endl;
  cin >> time_by_seconds;

  long long time_by_minutes = time_by_seconds / seconds_per_minute;
  int seconds = time_by_seconds % seconds_per_minute;

  long long time_by_hours = time_by_minutes / minutes_per_hour;
  int minutes = time_by_minutes % minutes_per_hour;

  int time_by_days = time_by_hours / hours_per_day;
  int hours = time_by_hours % hours_per_day;

  cout << time_by_seconds << " seconds = " << time_by_days << " days " 
       << hours << " hours " << minutes << " minutes " << seconds << " seconds;" << endl;

}