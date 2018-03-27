#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
	string str;
	cin >> str;
	long long oct = 0;
	int len;
	len = str.length();
	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			oct += (str[i] - 'A' + 10) * pow(16, len - i - 1);
		}
		else
		{
			oct += (str[i] - '0') * pow(16, len - i - 1);
		}
	}
	cout << oct << endl;
	getchar();
	cin.get();
	return 0;
}
