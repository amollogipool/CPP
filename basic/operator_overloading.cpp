/*
Operator Overloading:
we can do the multiple operations using same operator.
Example:- + operator: for Addition and Concatenation purpose.
With the help to OO, we can perform some operations on object also.
*/
#include <iostream>
using namespace std;
class Number
{
	int n;
	public:
		void setNumber(int n);
		void putNumber();
		Number operator +(Number);
		void operator ==(Number);
		void operator ++();	
		void operator --();	
};

void Number::setNumber(int n)
 {
	this->n=n;
 }
 
void Number::putNumber()
{
   cout<<"Number is:"<<n;
}

Number Number::operator +(Number obj)	
{
	Number x;
	x.n=this->n+obj.n;
	return (x);
}

void Number::operator ==(Number obj2)
{
	if(this->n>obj2.n)
	cout<<"\nNumber1 is Largest";
	else if(obj2.n>this->n)
	cout<<"\nNumber2 is Largest";
	else
	cout<<"\nBoth Num1 & Num2 are Equal";
}

void Number::operator ++()
{
  this->n++;
  cout<<"\nNumber Incremented by 1: "<<this->n<<endl;
}

void Number::operator --()
{
  this->n--;
  cout<<"Number Decremented by 1: "<<this->n<<endl;
}

int main() {
	Number num1,num2,sum;
	num1.setNumber(30);
	num2.setNumber(10);
	//add two object
	sum=num1+num2;
	sum.putNumber();
	num1==num2;
	++sum;
	--sum;
	return 0;
}
