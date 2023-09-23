#include <iostream>
using namespace std;
class A{
public:
 virtual void f1(){
cout<<"maar diya gear"<<endl;
}
};
class B: public A {
public:
void f1(){
cout<<"chutadu singh"<<endl;
}
void f2(){
cout<<"f2 hi chlega"<<endl;
}

};
int  main()                                 //hmara program confuse ho jata hai ki f1() class A ka use krna hai ya class B ka.
{
	A *p ,o1 , *p1;                             //yeh dikkt early binding ki vjah se aati hai ( hmare pointer ko memory allocate baad mei hoti hai)
	B o2;                                   // Hmm Virtual function late binding krane ke liye use krte hai ... taaki run time mei decide ho ske ki konsa f1() chlana hai
	p= &o2;
	//p ->f1();
	p1 -> f1(); // B
	/* code */
	// A o1;
	// B *p ,o2;
	// p = &o2;
	// p ->f1();
	return 0;
}
