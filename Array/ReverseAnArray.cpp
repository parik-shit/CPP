/* //SIMPLE REVERSE ARRAY

#include <iostream>
using namespace std;
void reverse(int arr[] , int size){
	int start = 0;
	int end = size - 1;
	while( start <= end){
		swap(arr[start] , arr[end]);
		start++;
		end--;
	}
}
void printArray(int arr[] , int size){
	for(int i = 0 ; i < size ; i++){
		cout<<arr[i]<< " ";
	}
}
int main(){

int arr[4] = {1 , 2 , 3 , 4};
reverse(arr , 4);
printArray(arr, 4);
	return 0;
} 
*/

//ALTERNATE ARRAY REVERSE
#include <iostream>
using namespace std;
void reverse(int arr[] , int size){
	for(int i = 0 ; i < size  ; i = i+2){
		if(i+1 < size){
			swap(arr[i], arr[i+1]);
		}
	}
}
void printArray(int arr[] , int size){
	for(int i = 0 ; i < size ; i++){
		cout<<arr[i]<< " ";
	}
}
int main(){

int arr[4] = {1 , 2 , 3 , 4};
reverse(arr , 4);
printArray(arr, 4);
	return 0;
}