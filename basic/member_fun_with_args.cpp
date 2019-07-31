/*
Member Function with Arguments:
*/
#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
	int id;
	char name[30];
	float sal;
	public:
		void getEmployee(int id, char name[30],float sal);
		void putEmployee(void);
};

void Employee::getEmployee(int id, char n[30],float s){
	id=id;
	strcpy(name,n);
	sal=s;
}
void Employee::putEmployee(void){
	cout<<"ID is: "<<id<<endl;
	cout<<"Name is: "<<name<<endl;
	cout<<"Salary is: "<<sal<<endl;
}

int main() {
	Employee Emp;
	Emp.getEmployee(101,"Amol",25000);
	Emp.putEmployee();
	return 0;
}
