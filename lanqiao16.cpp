#include<iostream>

using namespace std;

int main()
{
	int i,j;
	int n;
	cin>>n;
	for(i = n;i >= 1;i--)
	{
		for(j = i;j >= 1;j--)
		{
			cout<<"*";
			if(j != 1)        //���������ո� 
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
} 
