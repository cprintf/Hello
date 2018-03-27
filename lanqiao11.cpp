//¸´ÊýµÄ¼Ó¼õ³Ë³ý 
#include<stdio.h>

struct Complex
{
	float real;
	float image;	
};

typedef struct Complex Complex;

Complex* add(Complex r,Complex i)
{
	Complex temp;
	temp.real = r.real + i.real;
	temp.image = r.image + i.image;
	return &temp;
}

Complex* sub(Complex r,Complex i)
{
	Complex temp;
	temp.real = r.real - i.real;
	temp.image = r.image - i.image;
	return &temp;
}

Complex* mul(Complex r,Complex i)
{
	Complex temp;
	temp.real = r.real * i.real -r.image*i.image;
	temp.image = r.real * i.image + r.image * i.real;
	return &temp; 
}

Complex* div(Complex r,Complex i)
{
	Complex temp;
	float x = i.real * i.real + i.image * i.image;
	temp.real = (r.real * i.real + r.image * i.image) / x;
	temp.image = (r.image * i.real - r.real * i.image) / x;
	return &temp; 
} 

int main()
{
	Complex Complex1,Complex2;
	Complex *ans;
	char op;
//	float a,b,c,d;
	scanf("%c",&op);
	scanf("%f%f%f%f",&Complex1.real,&Complex1.image,&Complex2.real,&Complex2.image);
	
	switch(op)
	{
		case '+':
			ans =add(Complex1,Complex2);break;
		case '-':
			ans = sub(Complex1,Complex2);break;
		case '*':
			ans = mul(Complex1,Complex2);break;
		case '/':
			ans = div(Complex1,Complex2);break;
		default: break;
	}
	printf("%.2f+%.2fi\n",ans->real,(*ans).image);
	return 0;
}
