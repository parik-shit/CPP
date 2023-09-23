#include <iostream>
using namespace std;
class BaseClass{
public:
	int var_base;
	void display(){
		cout<<"Displaying Base class variable var_base is " << var_base <<endl;
	}

};
class DerivedClass : public BaseClass{
public:
int var_derived;
void display(){
	cout<<"Displaying Base class variable var_base is " << var_base <<endl;
	cout<<"Displaying Derived class variable var_derived is "<<var_derived<<endl;
}
};
int main()
{
	BaseClass * base_class_pointer;
	BaseClass obj1;
	DerivedClass obj_derived;
	base_class_pointer = &obj_derived;
	base_class_pointer ->var_base = 35;
	base_class_pointer ->display();

	base_class_pointer ->var_base = 69;
	base_class_pointer ->display();
	DerivedClass *derived_class_pointer;
	derived_class_pointer = &obj_derived;
	/*derived_class_pointer ->var_base = 20;
	derived_class_pointer ->var_derived = 21;
	derived_class_pointer ->display(); */

	return 0;
}