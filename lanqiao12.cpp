#include<iostream>
using namespace std;

int main()
{
	long long N,result;
	cin>>N;
	if(N <= 2)      
	{
		result = N;
	}
	else if(N % 2 == 1)     //N为奇数 
	{
		result = N * (N - 1) * (N - 2);
	}
	else     //N为偶数 
	{
		if( N % 3 == 0)            // 判断到N-3就行了,因为N-4又是偶数啦T_T 
		{
			result = (N - 1) * (N - 2) * (N - 3);
		}		
		else
		{
			result = N * (N - 1) * (N-3);
		}	
	}
	cout<<result<<endl;
	return 0;
}
