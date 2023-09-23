/*#include <iostream>
using namespace std;
void printArray( int arr[] , int size) {
for( int i = 0 ; i < size ; i++){
cout<<arr[i]<<" ";
}
 cout<<" printing the array" << endl;
}
int main(){
//initializing an array 
	//declaring an array
int number[15] = { 2 , 44 , 5 } ;
printArray(number , 15);
int size = sizeof(number)/ sizeof(int);
cout << " size of number : "<< size;
return 0;
} */


//LINEAR SEARCH 
#include <iostream>
using namespace std; 
bool search( int arr[] , int size , int key){
	for( int i = 0 ; i < size ; i++){
		if(arr[i] == key){
			return 1;
		}
	}
			return 0;
	}
	
int main(){
	cout<<" key : " ;
	int key;
	cin>> key;
	int arr[10] = { 3 , 4 , 6 , 7 , 5, 2  , - 3 , - 5 , -2, 10};
bool found = search( arr , 10 , 1);
cout<<found;
return 0;
}