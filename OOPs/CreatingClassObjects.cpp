#include <iostream>
using std::string;
class Employee{
public:
string Name;
string Company;
int age;
void ApneBaareMeiBtao(){
	std::cout << "Name - " << Name << std::endl;
	std::cout << "Company - " << Company << std::endl;
	std::cout << "Age - " << age << std::endl;
}
};
int main(){
//creating an object 
	Employee employee1;
	employee1.Name = " Parikshit ";
	employee1.Company = " SexyDude ";
	employee1.age = 20;
employee1.ApneBaareMeiBtao();
	
}