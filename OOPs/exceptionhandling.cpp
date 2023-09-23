#include <iostream>
using namespace std;
int main(){
	cout<<"Hello there!"<<endl;
	try{
		throw 10;               //Whenever we use throw alone it will call a terminate function which will abort the program.
		cout<<"Exception!";

	}
	catch(int e){
		cout<<"Exception: "<< e;
	}
	return 0;

}