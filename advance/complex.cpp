#include <iostream>
using namespace std;
class Complex
{
	float real;
	float imag;
	public:
		void setComplex(float x, float y)
		{
			real=x;
			imag=y;
		}
		
		friend Complex addComplex(Complex,Complex);
		void putComplex(Complex);	
};

Complex addComplex(Complex c1, Complex c2)
{
	Complex c3;
	c3.real=c1.real+c2.real;
	c3.imag=c1.imag+c2.imag;
	return (c3);
}

void Complex::putComplex(Complex c)
{
	cout<<c.real<<" + j"<<c.imag<<endl;
}

int main() {
	Complex c1,c2,c3;
	c1.setComplex(3.1,5.3);
	c2.setComplex(4.1,3.1);
	c3=addComplex(c1,c2);
	c3.putComplex(c3);
	return 0;
}
