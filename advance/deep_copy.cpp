/*
Deep Copy of an object.
  It copies the data of one object to another if they are resides at different memory location.
*/
#include <iostream>
using namespace std;
class Integer
{
	int *p;
	public:
		Integer(int x)
		{
			p=new int;
			*p=x;
		}
		Integer(const Integer &i);// It takes a reference of its own class as a arguments.
		void setP(int x );
		void printP(); 
		~Integer();
};

Integer::Integer(const Integer &i)
{
   p=new int;
   *p=*(i.p);
}

void Integer::setP(int x)
{
	*p=x;
}

void Integer::printP()
{
	cout << " P =" <<*p<<endl;
	cout<<"Address of obj1"<<this;
}
Integer::~Integer(){
	delete p;
}
int main() {
	Integer ob1(10); //1-Arg Constructor is called.
	Integer ob2(ob1);  //Copy constructor is called.

    cout<<"\nObject1"<<endl;
    ob1.printP();
    cout<<"\nObject2"<<endl;
    ob2.printP();
    
    ob1.setP(12);
    cout<<"\nAfter Setting the value of Object1"<<endl;
    ob1.printP();
    
    ob2.setP(15);
    cout<<"\nAfter Setting the value of Object2"<<endl;
    ob2.printP();
   
	return 0;
}
