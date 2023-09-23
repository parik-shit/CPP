//                      OVERLOADING                             |                            OVERRIDING                    |            
// - "Overloading" is an example of compile time polymorphism.  |   - "Overriding" is an example of run-time polymorphism. |
// -  Overloading is done for readibility.                      |   -  Overriding is done for reusability.                 |
// -  return time can be different.                             |   -  return type and parameters are same.                | 
// -  Occurs in same class.                                     |   -  Inheritance is involved ( more than one class).     |
//______________________________________________________________|__________________________________________________________|

#include <iostream>
using namespace std;

class AbstractClass{
virtual void AskForPromotion() = 0;
};

class Employee:AbstractClass{
private:
string Company;
int Age;

protected:
	string Name;

public:

	void SetName(string name){//setter
		Name = name;
	}
	string GetName( ){//getter
		return Name;
	}
void SetCompany(string company){//setter
		Company = company;
	}
	string GetCompany( ){
		return Company;
	}
void SetAge(int age){//setter
	if(age >= 18){

		Age = age;}
	
	}
	int GetAge( ){
		return Age;
	}

void ApneBaareMeiBtao(){
	std::cout << "Name - " << Name << std::endl;
	std::cout << "Company - " << Company << std::endl;
	std::cout << "Age - " << Age << std::endl;
}
void AskForPromotion(){
	if(Age >= 30)
		std::cout<<Name << " got Promoted!!"<<std::endl;
	else
		std::cout<<Name << " cannot get Promotion!!"<<std::endl;
}
//Creating a constructor 

Employee(string name, string company, int age){
Name = name;
Company = company;
Age = age;
}
};

class Developer: public Employee {
public:
	void FixBug(){
		std::cout<<GetName()<< " fixed the bug using " << FavoriteProgrammingLanguage<<std::endl;
	}
	string FavoriteProgrammingLanguage;
	Developer(string name, string company, int age, string language)
		:Employee(name , company , age)
		{
FavoriteProgrammingLanguage = language;
}
	

};
int main(){
//creating an object 
	/*Employee employee1;
	employee1.Name = " Parikshit ";
	employee1.Company = " SexyDude ";
	employee1.age = 20;
employee1.ApneBaareMeiBtao(); */
Employee employee1 = Employee("Parikshit" ," SexyDude " , 30);
employee1.AskForPromotion();
//std::cout<<employee1.GetName()<<" is "<<employee1.GetAge()<<" years old"<<std::endl;
	//creating another object that is an object of derived class "Developer"
Developer d = Developer("Parikshit" ," SexyDude " , 30, "C++") ;
d.FixBug();
d.AskForPromotion(); //to use AskForPromotion function which is a method of class "Employee" we need to make the inherited parent class Employee public.
}
