#include <iostream>
using namespace std;
class Account
{
	int accNo;
	char name[30];
	public:
		void getAccount()
		{
			cout<<"Enter Account Number and Name";
			cin>>accNo>>name;
		}
		
		void putAccount()
		{
			cout<<"Account Number is: "<<accNo;
			cout<<"Name is: "<<name;
		}
};

class Saving: public Account
{
	float bal;
	public:
		void getSavingBal()
		{
			cout<<"Enter Balance";
			cin>>bal;
			if(bal<500)
			{
				cout<<"Minimum Balance is 500";
			}else{
				cout<<"Account Created";
			}
		}
		
		void putSavingBal()
		{
			cout<<"Balance is: "<<bal;
		}
};

class Current: public Account
{
	float bal;
	public:
		void getCurrentBal()
		{
			cout<<"Enter Balance";
			cin>>bal;
		}
		
		void putCurrentBal()
		{
			cout<<"Balance is: "<<bal;
		}
};
int main() {
	return 0;
}
