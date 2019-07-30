/*
Friend Class:
It is a composition relationship.
Declaring the one class object into another class.
-> Reusability.
Inheritance: Reusability and Extensiability.
*/
#include <iostream>
using namespace std;
class Test1
{
	int x,y;
	public:
		friend class Test2;
		void getXY()
		{
			cout<<"Enter X & Y values: ";
			cin>>x>>y;
		}
};

class Test2
{
	public:
		void showXY(Test1 t1)
		{
			cout<<" X is: "<<t1.x<<endl;
			cout<<" Y is: "<<t1.y<<endl;
		}
};

int main() {
	Test1 t1;
	Test2 t2;
	t1.getXY();
	t2.showXY(t1);
	return 0;
}
