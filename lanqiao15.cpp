#include<iostream>
using namespace std;

int CompactIntegers(int a[],int n)
{
	int i;
	int flag = 0;
	for(i = 0;i < n;i++)
	{
		if(a[i] != 0)    //等号不好写，就写!=，换个对立的思想^_^ 
		{
			
			a[flag] = a[i];
			flag++;
		}
	}
	return flag;
}

int main()
{
	int n,i;
	int *a;
	cin>>n;
	a = new int[n];
	for(i = 0 ;i < n;i++)
	{
		cin>>a[i];
	}
	int rs = CompactIntegers(a,n);
	cout<<rs<<endl;
	for(i = 0;i<rs;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	delete []a;
	return 0;
}
