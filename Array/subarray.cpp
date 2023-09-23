#include <iostream>
using namespace std;
void printer(int arr[4] , int s , int e){
	int product = 0;
	for(int i = s ; i <= e ; i++){

		 product = arr[i] + product;
		

	}
	cout<<product;
}
int main(){
	int arr[4] = {1 , 2 , 3 , 4};
	for(int i = 0 ; i < 4 ; i++){
		for(int j = i ; j < 4 ; j++){
			printer(arr , i , j);
			cout<<endl;


		}
	}
}