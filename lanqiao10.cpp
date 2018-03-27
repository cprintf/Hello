#include<iostream>
using namespace std;

class Zrf_Ratio
{
private:
	int fenzi;
	int fenmu;
public:
	
	void print();
	friend ostream& operator<<(ostream&,const Zrf_Ratio&);
	friend istream& operator>>(istream&,Zrf_Ratio&);
	friend bool operator==(const Zrf_Ratio&,const Zrf_Ratio&);
	friend bool operator<(const Zrf_Ratio&,const Zrf_Ratio&);
};



int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	Zrf_Ratio zr;
	zr.print();
	
	return 0;
 } 
