#include<iostream>
using namespace std;
int y=100;
class Test
{
	int x;
	public:
		void getX(int y);
		void showXX();
	friend void showX(Test t2);
		
};

void Test::getX(int y)
{
	x=y;
}

void Test::showXX()
{  
	cout<<"X is"<<x;
}
	
void showX(Test t2)
{    
	cout<<"Friend X is"<<++t2.x;
}

int main() {
	Test t;
	t.getX(10);
	t.showXX();
    showX(t);
	return 0;
}

