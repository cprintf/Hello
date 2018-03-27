#include<iostream>
using namespace std;

class Zrf_Ratio
{
private:
	int fenzi;
	int fenmu;
public:
	
	Zrf_Ratio(int a,int b);
	friend ostream& operator<<(ostream&,const Zrf_Ratio&);
	friend istream& operator>>(istream&,Zrf_Ratio&);
	friend bool operator==(const Zrf_Ratio&,const Zrf_Ratio&);
	friend bool operator<(const Zrf_Ratio&,const Zrf_Ratio&);
};

Zrf_Ratio::Zrf_Ratio(int a,int b)
{
	fenzi = a;
	fenmu = b;
}

ostream& operator<<(ostream& os,const Zrf_Ratio& zrf_Ratio)  //����<<�������������cout(os)�ĺ�������Zrf_Ratio�Ķ��󣬰����ָ�ʽ��� 
{
	os<<zrf_Ratio.fenzi<<"/"<<zrf_Ratio.fenmu;
	return os;
}

istream& operator>>(istream& in,Zrf_Ratio& zrf_Ratio)
{
	in>>zrf_Ratio.fenzi>>zrf_Ratio.fenmu;
	return in; 
}

bool operator==(const Zrf_Ratio& zrf_Ratio1,const Zrf_Ratio& zrf_Ratio2)   //�Ⱥŵ�����������Zrf_Ratio��ʵ������ 
{
	if(zrf_Ratio1.fenzi == zrf_Ratio2.fenzi && 
	   zrf_Ratio1.fenmu == zrf_Ratio2.fenmu)
	   {
	   	return 1;
	   }
	return 0;
}

bool operator<(const Zrf_Ratio& zrf_Ratio1,const Zrf_Ratio& zrf_Ratio2)
{
	if(zrf_Ratio1.fenzi * 1.0 / zrf_Ratio1.fenmu < 
	   zrf_Ratio2.fenzi * 1.0 / zrf_Ratio2.fenmu)
	   {
	   	return 1;
	   }
	return 0;
}

int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	Zrf_Ratio zrf(a,b),ssh(c,d);
	cout<<"zrf is:"<<zrf<<";ssh is:"<<ssh<<endl;
	cout<<"(zrf==ssh) is:"<<(zrf==ssh)<<";(zrf<ssh) is:"<<(zrf<ssh)<<endl;    //���غ����ڵ���ʱ��ʹ�÷��� 
	
	
	return 0;
 } 
