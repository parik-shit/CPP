#include <iostream>
using namespace std;
class Derived;
class Base {
private:
	int x;
public:
	void setData(int i){
		x = i;

	}
	friend void greater(Derived , Base);

};

void greater(Derived obj2 , Base obj1){
if(obj1.x > obj2.a)
	cout<< "o1 is greater";
else 
cout<<"o2 is greater";  
}

class Derived{
private:
 int a;
public:
 void setData(int i){
		a = i;

	}
 friend void greater(Derived , Base);

};

int main(){
	Base o1;
	Derived o2;
	o1.setData(2);
	o2.setData(3);
	greater(o1 , o2);

	return 0;
}