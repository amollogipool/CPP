
#include<iostream>
using namespace std;
class base1
{
	int x;
  public:
     void someFunction( )
     {  
	  x=10;
	  cout<<"X="<<x;
	 }  
};
class base2
{
	int y;
	public:
    void someFunction( )
     {
	   y=20;
	  cout<<"Y="<<y;
	  } 
};
class derived : public base1, public base2
{
    
};
int main()
{
    derived obj;
    //obj.someFunction() // Error!  
    obj.base1::someFunction();  // Function of base1 class is called
    obj.base2::someFunction();   // Function of base2 class is called.
}
