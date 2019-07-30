/*Overload + operator*/
#include <iostream>
#include<string.h>
using namespace std;
class Test
{
	char str[30];
	public:
		void read(){
			cout<<"Enter string= ";
			cin>>str;
		}
		
		void show(){
			cout<<"The String is= "<<str<<endl;
		}
		
		Test operator + (Test t2)
		{
			Test t3;
			strcpy(t3.str,this->str);
			strcat(t3.str," ");
			strcat(t3.str,t2.str);
			return t3;	
		}
};

int main() {
	Test t1, t2, t3;
	t1.read();
	t2.read();
	t3=t1+t2;
	t3.show();
	return 0;
}
