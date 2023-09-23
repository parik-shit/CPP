//HW 
#include <iostream>
using namespace std; 
int sumArr(int arr[] , int size){
	int sum = 0;
	for( int i = 0 ;  i < size ; i++){
sum = sum + arr[i];
	}
	return sum;
}
int main(){
int arr[5] = { 2 , 7 , 1 , -4 , 11};

cout<< sumArr(arr , 5 );
return 0;
}
