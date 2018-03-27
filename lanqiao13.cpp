#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int len = s.length();
	for(int i = 0;i < len;i++)
	{
		if('A' <= s[i] && s[i] <= 'Z')      //注意不能连等 
		{
			s[i] += 'a'-'A';
		}
		else
		{
			s[i] -= 32;
		}
		cout<<s[i];
	}
	return 0;
}
