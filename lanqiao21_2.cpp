//��ϵը��code
#include<iostream>
using namespace std;
//ԭ�����������·ݼ�1,�·�������ݼ�1 
int main()
{
	int monthsDay[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int Days = 1000;
	int year = 2014,month = 11,day = 9;
	
	for(int i = 0;i < Days;i++)
	{
		day++;   //һ��forѭ������Ӧһ��day++ 
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
