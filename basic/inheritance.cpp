/*
Inheritance is a feature of object oriented programming system, 
by which a class can inherit the commonly used properties/features of another classes. 
*/
#include <iostream>
using namespace std;
/*Base Class*/
class A
{   
    int x;
    public:
        void Afun(void);
};
// function definiion
void A::Afun(void)
{   
    x=10;
    cout << "I'm the body of Afun()..."<<x<<endl;
}
 
/*Derived Class*/
class B:private A
{
	int y;
    public:
        void Bfun(void);
};
// function definition
void B::Bfun(void)
{
	Afun();
	y=20;
    cout << "I'm the body of Bfun()..."<<y<< endl;
}

int main()
{
    //create object of derived class - class B
    B objB;
    // Now, we can access the function of class A (Base class)
//    objB.Afun();
    objB.Bfun();
    return 0;
}
