/*#include <iostream>
using namespace std;
void callByValue(int x, int y){
	int z = x;
	x = y;
	y = z;
}
int main(){
	int a = 4 , b = 6;
	cout<<"Before swapping value of a is " << a <<endl;
	callByValue(a,b);
	cout<<"After swapping value of a is " << a << endl;

return 0;
} */
#include <iostream>
using namespace std;
void callByValue(int &x,int &y){ //here in the memory block the name of the a and b variable defined in the main function is replaced by x and y 
	int z = x;
	x = y;
	y = z;
}
int main(){
	int a = 4 , b = 6;
	cout<<"Before swapping value of a is " << a <<endl;
	callByValue(a,b);
	cout<<"After swapping value of a is " << a << endl;

return 0;
}
