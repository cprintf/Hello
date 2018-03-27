#include<stdio.h>
#include<string.h>
//此程序有问题 
int main()
{
	int n,len;
	int rs;
	char* str;
	scanf("%d",&n);
	while(n)
	{
		scanf("%s",str);
		//len = str.length();
		printf("%o\n",*str);
	} 
	
	return 0;
 } 
