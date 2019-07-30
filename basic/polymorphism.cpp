/*
Polymorphism:
It is derived from two words "Poly" and "morphism".
Poly Meas: Many.
Morphism Means: (Forms) Property which helps us to assign more than one propery.

Two Types of Polymorphism:
1] Compile Time /Static/Early Binding.
EX: Function Overloading and Operator Overloading.

2] Run Time / Dynamic/Late Binding.
EX: Function Overriding: using Virtual Function and Abstract Class.

To achieve Runtime polymorphism, we need the IS-A Relationship.
If we declared the any MF in Derived Class but which is already declared in Base class.

If same function is defined in BASE & DERIVED Class with SAME Signature.FO
*/
#include <iostream>
using namespace std;
class A //Base class
{
	int x;
	public:
		void getX()
		{
			cout<<"Enter X value";
			cin>>x;
		}
		
		void showX()
		{
			cout<<"\nX "<<x;
		}
};

class B: public virtual A //Base class
{
	int y;
	public:
		void getY()
		{
			cout<<"Enter Y value";
			cin>>y;
		}
		
		void showY()
		{
			cout<<"\nY "<<y;
		}
};

class C: public virtual A //Base class
{
	int z;
	public:
		void getZ()
		{
			cout<<"Enter Z value";
			cin>>z;
		}
		
		void showZ()
		{
			cout<<"\nZ "<<z;
		}
};

class D: public B, public C 
{
	int n;
	public:
		void getN()
		{
			cout<<"Enter N value ";
			cin>>n;
		}
		void showN()
		{
			cout<<"\nN "<<n;
		}
};

int main(){
	D d;
	d.getX();
	d.getY();
	d.getZ();
	d.getN();
	
	d.showX();
	d.showY();
	d.showZ();
	d.showN();
	return 0;
}
