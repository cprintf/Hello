#include<iostream>

using namespace std;

int digui(int k,int n)
{
	if(k==0 || k == n)
	return 1;
	else
	return digui(k,n-1)+digui(k-1,n-1);	
 
} 

int main()
{
	int k,n;
	cin>>k>>n;
	cout<<digui(k,n);
	return 0;
 
 } 
