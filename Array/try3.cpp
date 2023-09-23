#include <iostream>
using namespace std;
int main(){
	int a = 8;
	int * ptr;
	ptr = &a;
	*ptr = 9;
	cout<<*ptr;
}