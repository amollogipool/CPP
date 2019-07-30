/*
Friend function with two different classes:
By using friend function, we can compare two different classes private data.
Advantages:
Instead of declaring the several member function, we can use only one friend function to access the 
private data from several classes.
*/
#include <iostream>
using namespace std;
class Test2; // Forward declaration.
class Test1
{
	int x;
	public:
		void getX()
		{
			cout<<"Enter X value: ";
			cin>>x;
		}
		
		friend void compare(Test1,Test2);
};

class Test2
{
	int y;
	public:
		void getY()
		{
			cout<<"Enter y value: ";
			cin>>y;
		}
		
		friend void compare(Test1,Test2);
};

void compare(Test1 t1,Test2 t2)
{
	if(t1.x>t2.y)
	cout<<"X is largest";
	else if(t2.y>t1.x)
	cout<<"Y is largest";
	else
	cout<<"Both are equal";
}

int main() {
	Test1 t1;
	Test2 t2;
	t1.getX();
	t2.getY();
	compare(t1,t2);
	return 0;
}
