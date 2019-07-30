/*
Operator:A symbol which is designed to perform a particular operations on primitive DD values.
with the help of basic operator,we can work with primitive DDT but 
by using OO, we are working with UDD means we are working with objects.
But here, By using basic operator, we can't work with UDD so 
to avoid this problem we are using the concept of operator overloading.
so with the help to OO, we can add two objects.
In C++, Except ::, . , * , sizeof(), ?: , all the others we can overload.
NOTE: = , & operators are already overloaded in C++.

Operator overloading means using an operator instead of function so
Operator is a function and It is a member of same class.
so, we are sending the objects as an arguments to the operator.
Operator Overloading is nothing but the using an operator instead of a function.
Syntax:
		return_type operator symbol (arguments);
WAP to overload == binary operator which required two operands.
*/
#include <iostream>
using namespace std;
class Test
{
	int a;
	public:
		void get(){
			cin>>a;
		}
		
		void operator == (Test t2)
		{
			if(this->a==t2.a)
			cout<<"Both the objects are Equal"<<endl;
			else
			cout<<"Both the objects are not Equal"<<endl;
		}
};
int main() {
	Test t1, t2;
	cout<<"Enter the value for t1 object";
	t1.get();
	cout<<"Enter the value for t2 object";
	t2.get();
	t1==t2;
	return 0;
}
