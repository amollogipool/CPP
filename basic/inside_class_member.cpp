/*Inside Class Definition:
If the member function is declared and defined inside the class.
Syntax:-
   return_type function_name(){
   // body of MF;
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
		static int count;
	public:
		void getEmployee(void){
			cout<<"Enter id,name,fee ";
			cin>>id>>name>>fee;
		}
		
		void putEmployee(void){
			cout<<"ID="<<id<<endl;
			cout<<"Name="<<name<<endl;
			cout<<"Fee="<<fee<<endl;
		}
};
int main() {
	Employee Emp;
	Emp.getEmployee();
	Emp.putEmployee();
	return 0;
}
