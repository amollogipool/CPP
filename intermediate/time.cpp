/*C++ program to add two time by passing objects as function argument(Call by value)*/
#include <iostream>
using namespace std;
class Time
{
	int hours;
	int minutes;
	int seconds;
	public:
		void getTime()
		{
			cin>>hours>>minutes>>seconds;
		}
		void putTime()
		{
			cout<<hours<<":"<<minutes<<":"<<seconds;
			
		}
		void addTime(Time,Time);
};
void Time::addTime(Time t1,Time t2)
{
	seconds=t1.seconds+t2.seconds;
	minutes=seconds/60;
	seconds=seconds%60;
	minutes=minutes+t1.minutes+t2.minutes;
	hours=minutes/60;
	minutes=minutes%60;
	hours=hours+t1.hours+t2.hours;
}
int main()
{
	Time t1,t2,t3;
	cout<<"Enter 1st time:";
	t1.getTime();
	cout<<"Enter 2nd time:";
	t2.getTime();
	cout<<"The 1st time is";
	t1.putTime();
	cout<<"\nThe 2nd time is";
	t2.putTime();
	t3.addTime(t1,t2);
	cout<<"\nThe resultant time is";
	t3.putTime();
	
}
