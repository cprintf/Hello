//星系炸弹code
#include<iostream>
using namespace std;
//原则：天数满了月份加1,月份满了年份加1 
int main()
{
	int monthsDay[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int Days = 1000;
	int year = 2014,month = 11,day = 9;
	
	for(int i = 0;i < Days;i++)
	{
		day++;   //一次for循环，对应一次day++ 
		if(day > monthsDay[month-1])
		{
			month++;
			day = 1;
		//	day++;
			if(month > 12)
			{
				year++;
				month = 1;
				if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
				{
					monthsDay[1] = 29;
				}
				else
				{
					monthsDay[1] = 28; 
				}
			}
			 
		}
	}
	
	cout<<year<<"-"<<month<<"-"<<day<<endl;
	return 0;
 } 
