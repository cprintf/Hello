//�мǣ��Ժ�����������������ʱ��ֻҪ�е�һ�У�����a[1]��ʼ����ʾ��һ�е��£�ǧ�����a[0]����������T_T 
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
