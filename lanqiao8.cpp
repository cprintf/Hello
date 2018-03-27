#include<iostream>
using namespace std;

int gongbeishu(int m,int n)
{
	int max,temp;
	if(m < n)
	{
		temp = m;
		m = n;
		n = temp;	
	}	
	max = m;
	while(max++)
	{
		if(max%m==0 && max%n==0)    //最小公倍数 
		{  
			return max;
		}
	}
}

int main()
{
	int m,n;
	cin>>m>>n;
	cout<<gongbeishu(m,n);
	return 0;
}
