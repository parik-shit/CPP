#include <iostream> //What to under stand here is that 
using namespace std; //We know when we make an object a constructor is automatically called if it is not defined
                      // But what happens in the case of constructor of a derived "class" ?
                      // base class ka , child class ka , ya dono ?
                      // ANSWER - both constructors work. (constructor of child class class the constructor of base class)
                      // Order of execution of constructors - From parent to child.
                      // Order of calling of constructors   - From child to parent.
class A{ //parent class 
public:
	int a;
public:
	A(int k){

a = k;
	}
};
class B: public A{ //derived class
public:
int b; 
public:
	B(int x , int y):A(x) //special syntax ( this is how parent constructor is called). First B constructor is called and then A(i.e first parent constructor runs).
	{
		b = y;
	}
};
int main(){
	B obj1(2 , 3);
	cout<<obj1.a;
	return 0;
}