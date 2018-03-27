//切记：以后排列行数和列数的时候，只要有第一行，就用a[1]开始，表示第一行的事，千万别用a[0]代表，容易乱T_T 
#include<iostream>
using namespace std;

int max(int m,int n)
{
	if(m > n)
	{
		return m;
	}
	else 
		return n;
}

int main()
{
	int a[101][101];
	int n,i,j;
	cin>>n;
	for(i = 1;i <= n;i++)
	{
		for(j = 1;j <= i;j++)
		{
			cin>>a[i][j];
		}
	}
	
	for(i = n-1;i >= 1;i--)
	{
		for(j = 1; j <= i;j++)
		{
			a[i][j] += max(a[i+1][j],a[i+1][j+1]);
		}
	}
	cout<<a[1][1]<<endl;
	return 0;
}
