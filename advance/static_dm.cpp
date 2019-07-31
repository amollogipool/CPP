/*
A static data member can also be accessed through the class name without using the static member function (as it is a class member), 
here we need an Scope Resolution Operator (SRO) 
:: to access the static data member without static member function.
Syntax:
class_name :: static_data_member;
*/
#include <iostream>
using namespace std;
class Demo
{
	public:	
		static int ABC;
};

//defining
int Demo :: ABC =10;


int main()
{
    
	cout<<"\nValue of ABC: "<<Demo::ABC;
	return 0;
}
