/*C++ program to create Employee class, read and print N Employee's details 
(Example of array of objects).*/ 
#include<iostream>
#include<string.h>
using namespace std;
#define MAX 10 
class Employee
{
 	//static char companyName[30];
 	static int count;
	int empId;
	char empName[30];
	float empSal;
	
	public:
		void getCount(void)
		{
		 cout<<"Count: ";
		 count++;
		 cout<<count<<endl;
		 //cout<<"Company Name : ";
		 //strcpy(companyName,"LogipoolInfotech");
		 //cout<<companyName<<endl;	
		}
		void getEmployeeDetails();
		void putEmployeeDetails();
		void getGrossSalary();
		void getBonusSalary();
};
 
void Employee::getEmployeeDetails(){

	cout<<"Enter Employee ID: ";
	cin>>empId;
	
	cout<<"Enter Employee Name: ";
	cin>>empName;
	
	cout<<"Enter Employee Salary: ";
	cin>>empSal;
}

void Employee::putEmployeeDetails(){
	cout<<"Employee ID: "<<empId<<endl;
	cout<<"Employee Name: "<<empName<<endl;
	cout<<"Employee Salary: "<<empSal<<endl;	
}

void Employee::getGrossSalary(){
	
	float houseRentAllowance, dearnessAllowance, providentFound, grossSalary;
	
	houseRentAllowance=0.2*empSal;
	dearnessAllowance=0.4*empSal;
	providentFound=0.12*empSal;
	grossSalary=empSal+houseRentAllowance+dearnessAllowance+providentFound;
	
	cout<<"House Rent Allowance :"<<houseRentAllowance<<endl;
	cout<<"Dearness Allowance :"<<dearnessAllowance<<endl;
	cout<<"Provident Found :"<<providentFound<<endl;
	cout<<"Gross Salary:"<<grossSalary;
}

void Employee::getBonusSalary(){
	char c;
	float bonus;
	cout<<"Enter M for Male & F for Female\n:";
	cin>>c;
	
	if(c=='M' || c=='m'){
		if(empSal>10000)
		bonus=empSal*0.05;
		else
		bonus=empSal*0.07;
	}
	
	if(c=='F' || c=='f'){
		if(empSal>10000)
		bonus=empSal*0.1;
		else
		bonus=empSal*0.12;
	}
	
	empSal+=bonus;
	cout<<"\nBonus:"<<bonus;
	cout<<"\nTotal Salary:"<<empSal;
}
int Employee::count;
int main(){
	Employee Emp[MAX]; //array of objects creation
	int i,n;
	cout<<"Enter total number of Employees: ";
    cin>>n;
    
    for(i=0;i<n;i++){
    	cout<<"\nEnter details of Employee"<<i+1<<endl;
    	Emp[i].getCount();
    	Emp[i].getEmployeeDetails();
        Emp[i].getGrossSalary();
        Emp[i].getBonusSalary();
	}
	
	cout << endl;
	
	 for(i=0;i<n;i++){
        cout <<"\nDetails of Employee"<<(i+1)<<":\n"<<endl;
        Emp[i].putEmployeeDetails();
        cout << endl;
        Emp[i].getGrossSalary();
        cout << endl;
        Emp[i].getBonusSalary();
    }
	return 0;
}


