#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a,int b)
{
	return a > b;
}

int main()
{
    int T,n,i,sum;
    cin>>T;
    while(T--)
    { 
    	sum = 0;
    	cin>>n;
    	
    	int *arr1 = new int[n];
    	int *arr2 = new int[n];
    	
    	for(i = 0;i < n;i++)
    	{
    		cin>>arr1[i];
		}
		for(i = 0;i < n;i++)
		{
			cin>>arr2[i];
		}
		
		sort(arr1,arr1+n);
		sort(arr2,arr2+n,compare);
		for(i = 0; i < n;i++)
		{
			sum += arr1[i]*arr2[i];
		}
		cout<<sum<<endl;
    	
    }
    return 0;
}
