/*Class is a User Defined DT, Complex DT.
Class is a container which contains variables(DM) and functions (MF) called class.
Class is blue print(Original Copy) to construct any object.
It is a Pre_plan before going to construct any objects.
Class is a logical entity whereas object is physical entity.
Class is never occupy the memory but object occupy the memory.
so object is a physical representation of class.
*/
#include <iostream>
using namespace std;
class Employee
{
	int id;
	char name[30];
	
	public:
		void getdata(void);
		void display(void);
};

void Employee::getdata(void){
	cout<<"Enter id: ";
	cin>>id;
	cout<<"Enter Name: ";
	cin>>name;
}

void Employee::display(void){
	cout<<"\nId: "<<id;
	cout<<"\nName: "<<name;
}


int main() {
	Employee emp;
	emp.getdata();
	emp.display();
	return 0;
}
