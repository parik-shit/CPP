#include <iostream>
using namespace std;
class Complex{

public:
	int a, b;
	void setData(int x , int y){
		a = x;
		b = y;
	}
	void showData(){
		cout<< "a: " << a << "b: "<< b<<endl;
	}
	friend void func();

};

void func(Complex c){
cout << "Sum: "<< c.a + c.b << endl;
}

int main()
{
	Complex c1;
	c1.setData();
	c1.showData();
	func(c1);
	return 0;
}
