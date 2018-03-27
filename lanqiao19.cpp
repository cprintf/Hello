#include<iostream>
using namespace std;

int main()
{
	int a[100];
	int i,sum;
	a[0] = 1;
	sum = a[0];
	for(i = 1;i < 100;i++)
	{
		a[i] = a[i-1] + (i+1);    //数组从0开始编T_T 
		sum += a[i];
	}
	cout<<sum<<endl;
	
	return 0;
}
