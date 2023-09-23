#include <iostream> //static member variable don't belong to an object but to whole class.
using namespace std;
class Base {
public:
	void fun1(){
		cout<<"something";
	}
	~Base(){

	}
};
class Derived: public Base{
public:
	void fun2(){
		cout<<"nothing";
	}
	~Derived(){

	}
}
void fun(){
Base *ptr = new Derived;
ptr->fun1();  //correct
ptr->fun2();  //error
delete ptr;
}
int main(){

}