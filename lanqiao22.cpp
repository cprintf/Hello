#include<iostream>
using namespace std;

int main()
{
	int start,end;
	for(start = 1 ; start < 236;start++)
	{
		for(end = start;end < 236;end++)
		{
			int sum = 0;
			for(int i = start;i<end;i++)
			{
				sum += i;			
			}		
			if(sum == 236)
			{
				cout<<start<<endl;	
				cout<<end<<endl;		
			}
		}	
	} 
	return 0;
 } 
