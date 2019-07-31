#include<iostream>
using namespace std;
class Item
{
	static int count;
	int number;
	public:
		void getItem(int n)
		{
			number=n;
			count++;
		}
		void getCount(void)
		{
		 cout<<"count: ";
		 cout<<count<<endl;	
		}
};
int Item::count;
int main() {
    Item i1,i2,i3;
    i1.getCount();
    i2.getCount();
    i3.getCount();
    
    i1.getItem(100);
    i2.getItem(200);
    i3.getItem(300);
    
    cout<<"After Reading data"<<endl;
    
    i1.getCount();
    i2.getCount();
    i3.getCount();
	return 0;
}
