#include <iostream>
using namespace std;
int recursiveFunction(int m , int n){
	if( m  == n )
	return m;
return m + recursiveFunction(m +1 , n );
}
int main(){
	int m , n;
cin>>m >> n;
cout<< "sum: " << recursiveFunction(m , n);
}