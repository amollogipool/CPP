/*
Constructor:
constructor is a special member function which is used to initialize some valid values to the DMs of the class.
constructor is used to initialize the instance of the class.
constructor gets called automatically when the object of class is created.

Some Characteristics of Constructors:
1.They must have the same name as the class name.
2.They should be declared in public section only.
3.They don't have return types, (not even void)- so, they don't return any values.
4.They can have default arguments.
5.They can be overloaded.(parameterized constructor).
6.They can't be inherited.
7.They can't be virtual.

Types of Constructors:
1.Default Constructor.
2.Parameterized Constructor.
3.Copy Constructor.
*/
#include <iostream>
using namespace std;
class Integer
{
	int m,n;
	public:
		Integer() // Default Constructor Declared: it doesn't take any arguments.
		{
			m=n=0;
		} 
		Integer(int x, int y); // Parameterized Constructor Declared: it takes arguments.
		void display();
};

Integer::Integer(int x, int y) //Constructor Defined.
{
	m=x;
	n=y;
}

void Integer::display()
{
	cout<<"m="<<m<<endl;
	cout<<"n="<<n<<endl;
}
int main() {
	Integer i; //constructor is invoked During object creation.
	i.display();
	
	//Integer int1(10,20);// constructor called implicitly.
	//cout<<"\nOBJECT1"<<endl;
	//int1.display();
	
	//Integer int2=Integer(50,60);// constructor called explicitly.
	//cout<<"\nOBJECT2"<<endl;
	//int2.display();
	
	return 0;
}
