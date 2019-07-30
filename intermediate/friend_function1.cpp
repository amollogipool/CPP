/*
Friend function:
It is not a member of the class but due to friend, It can access the private data of the class.
Friend Function Declaration:
It is declared with friend keyword before function name which is inside the class.
It accept the object as an argument to the function.
ex: friend void get(Object);
Friend Function Definition:
No need to use friend keyword before function name.
It can be called using objectName.privateMemberName.
ex: Test t;
    cout<<" privateMemberName "<<objectName.privateMemberName;
Note: Declaration of FF is inside the class and Definition of FF is outside the class.
*/
#include<iostream>
using namespace std;
class Test
{
	int x,y;
	friend void showXY(Test);// Object as an argument to the function.
};

void showXY(Test t)
{
	t.x=10;
	t.y=20;
	cout<<"X is: "<<t.x<<endl;
	cout<<"Y is: "<<t.y<<endl;
}
int main() {
	Test t;
	showXY(t);
	return 0;
}
