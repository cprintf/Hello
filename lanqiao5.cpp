#include<stdio.h> 

int main()
{
	int a[1000];
	int n,i,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	scanf("%d",&temp);
	for(i=0;i<n;i++)
	{
		if(temp == a[i])
		{
			printf("%d\n",i+1);
			break;
		}
		else if(i==n-1)
		{
			printf("-1\n");
		} 
	}
	return 0;
}
