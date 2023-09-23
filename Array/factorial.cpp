#include <iostream>
using namespace std;
int factRecursion(int m){
	if(m == 1)
		return 1;
	return m * factRecursion(m - 1);
}
int main(){
	int m;
	cin>>m;
cout<< factRecursion(m);
}