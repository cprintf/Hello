#include<iostream>
using namespace std;

int main()
{
	int i,j,k,m,n;
	int count = 0;
	for(i = 1; i <= 9;i++)
	{
		for(j = 0;j<=9;j++)
		{
			for(k = 0;k<=9;k++)
			{
				for(m = 0;m<=9;m++)
				{
					for(n = 0;n<=9;n++)
					{
						if(i==4||j==4||k==4||m==4||n==4)   //Ìø¹ý4 
						{
							continue;
						}
						else
						count++;
					}
				}
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
