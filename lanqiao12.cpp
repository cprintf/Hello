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
	else if(N % 2 == 1)     //NΪ���� 
	{
		result = N * (N - 1) * (N - 2);
	}
	else     //NΪż�� 
	{
		if( N % 3 == 0)            // �жϵ�N-3������,��ΪN-4����ż����T_T 
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
