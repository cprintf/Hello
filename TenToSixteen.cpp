#include<iostream>
using namespace std;
/*********************
*Ҳ����ʹ�ø�ʽ���
*ʮ����ת16���� %x 
*********************/
int main()
{
	long int input;
	int i;
	cin >> input;
	int a[10000];
	for( i = 0;input;)
	{
		a[i] = input % 16;
		input = input / 16;
		i++; 
	}
	for(int j = i-1; j >= 0;j--)
	{
		if(a[j] >= 10)
		{
			cout<<"ABCDEF"[a[j]-10];  //!!!
		}
		else
		{
			cout<<a[j];
		}
	}
	return 0;
}

