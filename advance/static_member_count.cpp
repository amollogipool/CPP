/*
A static data member is also known as "Class Member" and it is available for all classes. 
In other words – we can say "A static data member is just like a global variable for a class".
 Generally, static data members are used to maintain the common things related to the class, 
 like counting the objects etc.
 
 A static member function is used to access or manipulate the static data member, 
 other data member cannot be used with a static member function.
 
 This program is implemented to count the total number of created objects with 
 the help of static data member and static member function.

A static data member needs to be declared first that we declared in private section: 
Example: static int count;
To count the object, data member count must be incremented by 1, 
that we have done in the constructor because the constructor is invoked when a new object is created.
To print the total number of created objects, 
we created a static member function named totalObjects() which is returning the value of count.
Final and important thing –
 A static data member must be initialized outside of the class with the class name. 
 Example: int Message::count =0;
*/
#include <iostream>
#include <string.h>
using namespace std;

class Message
{
	private:
		char str[30];
		//static data member to count the objects
		static int count;
		
	public:
		//constructor
		Message()
		{
			count++;
		}
		
		//member function to initialise message
		void initMessage(char s[])
		{
			strcpy(str,s);
		}
		
		//member function to print message
		void printMessage(void)
		{
			cout << str << endl;
		}
		
		//static member function
		static int totalObjects(void)
		{
			return count;
		}
};

//initialise static member function
int Message::count =0;

//main function
int main()
{
	Message M1;
	Message M2;
	Message M3;
	
	M1.initMessage("Message one");
	M2.initMessage("Message two");
	M3.initMessage("Message three");
	
	M1.printMessage();
	M2.printMessage();
	M3.printMessage();
	
	//printing object count 
	cout << "Total objects created: " << Message::totalObjects() << endl;
	
	return 0;
}
