#include <iostream>
/*
In each scope, a name can only represent one entity. 
So, there cannot be two variables with the same name in the same scope. 
Using namespaces, we can create two variables or member functions having the same name.

Consider a situation, when we have two persons with the same name, 
Zara, in the same class. Whenever we need to differentiate them definitely 
we would have to use some additional information along with their name, 
like either the area, if they live in different area or their mother’s or
 father’s name, etc.

Same situation can arise in your C++ applications. 
For example, you might be writing some code that has a function called xyz() and 
there is another library available which is also having same function xyz(). 
Now the compiler has no way of knowing which version of xyz() function you are referring to within your code.
A namespace is designed to overcome this difficulty and is used as additional information to differentiate similar functions, classes, variables etc. with the same name available in different libraries. Using namespace, you can define the context in which names are defined. In essence, a namespace defines a scope.
*/
// A program to demonstrate need of namespace 
/*int main() 
{ 
    int value; 
    value = 0; 
    double value; // Error here 
    value = 0.0; 
    return 0;
}*/

// Here we can see that more than one variables  
// are being used without reporting any error. 
// That is because they are declared in the  
// different namespaces and scopes. 
using namespace std; 
  
// Variable created inside namespace 
namespace first 
{ 
    int val = 500; 
} 
  
// Global variable 
int vall = 100; 
  
int main() 
{ 
    // Local variable 
    int val = 200; 
    // These variables can be accessed from 
    // outside the namespace using the scope 
    // operator :: 
    cout << first::val << '\n';
    cout <<vall<<'\n';
	cout <<val<<'\n';  
    return 0; 
} 
