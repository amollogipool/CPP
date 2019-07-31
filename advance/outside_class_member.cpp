/*Outside Class Definition:
When the MF is declared inside the class and defined outside the class is called OCD.
The syntax for defining a member function outside the class is
Return_type class_name :: function_name (parameter_list)
{
// body of the member function
}
*/
#include <iostream>
using namespace std; 
class Employee
{
	private:
		int id;
		char name[30];
		float fee;
	public:
		void getEmployee();
		void putEmployee(void);
};

void Employee::getEmployee()
   {
	cout<<"Enter id,name,fee ";
	cin>>id>>name>>fee;
   }
		
void Employee::putEmployee()
   {
	cout<<"ID="<<id<<endl;
	cout<<"Name="<<name<<endl;
	cout<<"Fee="<<fee<<endl;
	}
int main() {
	Employee Emp;
	Emp.getEmployee();
	Emp.putEmployee();
	return 0;
}
