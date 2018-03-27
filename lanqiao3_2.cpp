#include<stdio.h>

int main()
{
	int n,i,j=0,max=-10000,min=10000,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&j);
		if(j > max)
		{
			max = j;
		}
		if(j < min)
		{
			min = j;
		}
		sum += j;
	}
	printf("%d\n",max);
	printf("%d\n",min);
	printf("%d\n",sum); 
	return 0;
}
