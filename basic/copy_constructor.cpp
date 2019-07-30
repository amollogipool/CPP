/*
Copy Constructor.
*/
#include <iostream>
using namespace std;
class Integer
{
	int m,n;
	public:
		Integer()
		{
			m=n=0;
		}
		Integer(int x, int y); // Parameterized Constructor Declared: it takes arguments.
		//Integer(const Integer &i);//Copy constructor Declared:
		void display();         // It takes a reference of its own class as a arguments.
};

Integer::Integer(int x, int y) //Constructor Defined.
{
	m=x;
	n=y;
}
/*Integer::Integer(const Integer &i)
{
	m=i.m;
	n=i.n;
}*/
void Integer::display()
{
    cout<<"m="<<m<<endl;
	cout<<"n="<<n<<endl;
}
int main() {
	Integer int1;
	Integer int2(10,20);
	Integer int3(int2); // 1st approach - Copies the values of int2 to int3.
	//Integer int3=int2; // 2nd -compiler implicitly calls to copy constructor.
	//Integer int3;
	//int3=int2; // Implicit copy assignment operator which is already overloaded.

	cout<<"\nOBJECT1"<<endl;
	int1.display();
	
    cout<<"\nOBJECT2"<<endl;
	int2.display();
	
	cout<<"\nOBJECT3"<<endl;
	int3.display();
	return 0;
}
