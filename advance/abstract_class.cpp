/*
Virtual Function:
It is used to achieve the Runtime polymorphism.

Abstract Class:
It is not possible to create the instance of Abstract Class
Only Method Delaration with "virtual" keyword and 
which is initialized with 0; so it is pure virtual function.

when pure virtual function is declared in Base class then that 
Base class is called Abstract Class.

It hides the internal implementation from user and only shows the essential things to user.
*/
#include <iostream>
using namespace std;
class Shape
{   
    protected:
	float d1,d2; //(Dimensions) d1-Base, d2-height.
	public:
		void getDim()
		{
			cin>>d1>>d2;
		}
	virtual float area()=0;// Only Declaration & Implementation done in Next Class.	
};

class Triangle: public Shape
{
	public:
		float area()// Need not to use virtual keyword at the time of function defination.
		{
			return 0.5*d1*d2;
		}
};

class Rectangle: public Shape
{
	public:
		float area()
		{
			return d1*d2;
		}
};

int main() {
	//Shape s; Instantiation of Abstract Class is not possible.
	Triangle t;
	cout<<"Enter Triangle Base and Height";
	t.getDim();
	cout<<"Triangle Area= "<<t.area()<<endl;
	Rectangle r;
	cout<<"Enter Rectangle Base and Height";
	r.getDim();
	cout<<"Rectangle Area= "<<r.area()<<endl;
	return 0;
}
