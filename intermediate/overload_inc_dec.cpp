/*
Overload Increment and Decrement Operator.
They are working on one operand/object only.
1 object is implicit and anothe is explicit but 
in unary operator we require only one operand/object.
so no need to use explicit object only the implicit object is enouph.
*/
#include <iostream>
using namespace std;
class Test
{
	int x;
	public:
		Test()
		{
		 this->x=0;
		}
		
		void operator++()
		{
			x++;
		}
		
		void operator--()
		{
			x--;
		}
		
		void show()
		{
			cout<<"The value of x is: "<<this->x<<endl;
		}
		
};

int main() {
	
	Test t;
	t.show();
	++t;
	t.show();
	--t;
	t.show();
	return 0;
}
