#include<iostream>
//回文数 
using namespace std;

int main()
{
	for(int i = 1;i<=9;i++)
	{
   //提交到github的注释
		for(int j = 0;j<=9;j++)
		{
			for(int k =0;k<=9;k++)
			{
				for(int l = 0;l<=9;l++)
				{
					if(i==l&&j==k)
					{
						cout<<i<<j<<k<<l<<endl;
					}
				}
			}
		}
	}
	return 0;
 } 
