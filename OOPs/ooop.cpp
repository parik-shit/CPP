#include <iostream>
#include <string>
using namespace std;
class Employee{
public:
    string Company;
    int Experience;
    Employee(string company , int experience){
        Company = company;
        Experience = experience;

    }

};
int main(){
    Employee o1("microsoft" , 6);
}