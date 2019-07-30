#include <iostream>
using namespace std;
class Student 
{
	protected:
	int rno;
	char name[30];
	public:
		void getStudent()
		{
			cout<<"Enter Student Roll Number and Name";
			cin>>rno>>name;
		}
		
		void putStudent()
		{
		cout<<"Student Roll Number: "<<rno;
		cout<<"\nStudent Name: "<<name;
		}
};

class Marks 
{
	protected:
	int m1,m2,m3;
	public:
		void getMarks()
		{
			cout<<"Enter 3 Subject Marks";
			cin>>m1>>m2>>m3;
		}
		
		void putMarks()
		{
		cout<<"\nM1: "<<m1;
		cout<<"\nM2: "<<m2;
		cout<<"\nM3: "<<m3;
		}
};

class Result:public Student, public Marks 
{
    int total;
	float avg;
	public:
		void putResult()
		{
		total=m1+m2+m3;
		avg=total/3.0;
		cout<<"\nTotal Marks: "<<total;
		cout<<"\nAverage Marks: "<<avg;
		}
};

int main() {
	Result r;
    r.getStudent();
    r.getMarks();
    r.putStudent();
    r.putMarks();
    r.putResult();
	return 0;
}
