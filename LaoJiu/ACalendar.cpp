/*
 * @Description: 
 * @Author: 陈十一
 * @Date: 2020-05-20 10:05:41
 * @LastEditTime: 2020-05-21 18:11:38
 * @LastEditors: 陈十一
 */ 

/*
=======================================
       A-Calender(2000-5-19)
---------------------------------------
SUN   MON   TUE   WEN   THU   FRI   SAT
---------------------------------------
1     2     3     4     5     6
7     8     9     10    11    12    13
14    15    16    17    18    19    20
21    22    23    24    25    26    27
28    29    30    31
=======================================
*/
#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;


/*
class Date
{public:
    int year;
    int month;
    int day;
    int week(){
    };
};*/

#define MAX_MONTH 12//12???? 
#define MAX_WEEKDAY 7//???????7?? 

// 判断是否为闰年
int isLeapYear(int y){
  if((y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0)))
    return 1;
  else return 0;
};

// 蔡勒公式判断星期几
int ReturnWeekDay( int iYear, int iMonth, int iDay )
{
	int iWeek = 0;
	unsigned int y = 0, c = 0, m = 0, d = 0;
 
	if ( iMonth == 1 || iMonth == 2 )
	{
		c = ( iYear - 1 ) / 100;
		y = ( iYear - 1 ) % 100;
		m = iMonth + 12;
		d = iDay;
	}
	else
	{
		c = iYear / 100;
		y = iYear % 100;
		m = iMonth;
		d = iDay;
	}
	
	iWeek = y + y / 4 + c / 4 - 2 * c + 26 * ( m + 1 ) / 10 + d - 1;    //蔡勒公式
	iWeek = iWeek >= 0 ? ( iWeek % 7 ) : ( iWeek % 7 + 7 );    //iWeek为负时取模
	if ( iWeek == 0 )    //星期日不作为一周的第一天
	{
		iWeek = 7;
	}
 
	return iWeek;
}

void color(int a)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
}

int GetMonth(int iYear, int iMonth)//???????ж????????????? 
{
    int aiMonDays[MAX_MONTH] = { 31,0,31,30,31,30,31,31,30,31,30,31 };
    aiMonDays[1] = isLeapYear() ? 29 : 28;
    return aiMonDays[iMonth - 1];
}

void show(Date& sDate)
{
    system("color 0c");
    char Line_A[] = "=======================================";
    char Line_B[] = "            A-Calender";
    char Line_C[] = "SUN   MON   TUE   WEN   THU   FRI   SAT";
    char Line_D[] = "---------------------------------------";
    
    Date TempDate = sDate;
    TempDate.day = 1;
    int FistWeek = TempDate.week();//????????????????? 
    int itDateNum = GetMonth(sDate.year, sDate.month);//????????? 

    color(11);
    cout << Line_A << endl;
    color(13);
    cout << Line_B;
    cout << "(" << sDate.year << "-" << sDate.month << "-" << sDate.day << ")" << endl;
    color(7);
    cout << Line_D << endl;
    color(237);
    cout << Line_C << endl;
    color(7);
    cout << Line_D << endl;//???????? 
    
    int i;
    char Space[] = "      ";
    for (i = 0; i < FistWeek; i++)
    {
        cout << Space;//????п??????? 
    }
    for (i = 1; i <= itDateNum; i++)
    {
        color(i % 13);
        cout << setw(6) << i;
        if ((FistWeek + i) % MAX_WEEKDAY == 0)//???7??????? 
        {
            cout << endl;
        }
    }
    color(11);
    cout << endl << Line_A;
    color(9);
    return;
}
int main()
{
    Date DATE;
    show(DATE);
}


