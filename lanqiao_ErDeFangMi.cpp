#include<stdio.h>
#include<cstring>
void digui(int n)
{
	int sum;
	int a[20];
	int i = 0,j = 0,k;
	while(n)
	{
		if(n % 2)
		{
			a[j++] = i;
		}
		i++;
		n /= 2;
	}
	for(i = j - 1;i>=0;--i)
	{
		if(a[i] == 0)
			printf("2(0)");
		else if(a[i] == 1)
			printf("2");
		else if(a[i] == 2)
			printf("2(2)");
		else if(a[i] > 2)
		{
			printf("2(");
			digui(a[i]);
			printf(")");	
		}	
		if(i != 0)
		{
			printf("+");
		}
	}
	
}

int main()
{	
	int n;
	scanf("%d",&n);
	digui(n);
	printf("\n");

	return 0;
 
} 
