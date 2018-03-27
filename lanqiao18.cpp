#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n,len_str,len_str2;
	string str,str2 = ""; //str2进行初始化 
	string str3 = "";
	cin>>n;
	while(n)
	{
		cin>>str;
		n--; 
	} 
	len_str = str.length();
	for(int i = 0;i < len_str;i++)
	{
		switch(str[i])
		{
			case '0':
				str2 += "0000";break;
			case '1':
				str2 += "0001";break;
			case '2':
				str2 += "0010";break;
			case '3':
				str2 += "0011";break;
			case '4':
				str2 += "0100";break;
			case '5':
				str2 += "0101";break;
			case '6':
				str2 += "0110";break;
			case '7':
				str2 += "0111";break;
			case '8':
				str2 += "1000";break;
			case '9':
				str2 += "1001";break;
			case 'A':
				str2 += "1010";break;
			case 'B':
				str2 += "1011";break;
			case 'C':
				str2 += "1100";break;
			case 'D':
				str2 += "1101";break;
			case 'E':
				str2 += "1110";break;
			case 'F':
				str2 += "1111";break;
			default:break;
		}
	}
	len_str2 = str2.length();
	
	if(len_str2 % 3 == 1)
	{
		str += "00";
		len_str2 = str2.length();	
	} 
	else if(len_str2 % 3 == 2)
	{
		str += "0";
		len_str2 += 1;
	}
	int j = 0;
	for(int i = 0; i< len_str2; i+=3)
	{
		str3[j]= (str2[i] - '0') * 4 + (str2[i+1] - '0') *2 + (str2[i+2] - '0') * 1;
		j++;
	}
	cout<<str3<<endl;
	return 0;
}
