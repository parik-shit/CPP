#include <iostream>
using namespace std;
void sorting(int arr[] , int n ){
	for(int i = 0  ; i < n - 1 ; i++){
		int min = i ;
		for(int j = i + 1 ; j < n ; j++){
			if(arr[min] > arr[j]){
				min = j;
			}
		}
		swap(arr[i] , arr[min]);
	}
	for(int i = 0 ; i < n ; i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
int n = 4 ; 
int arr[] = {4 , 6 , 1 , 5};
sorting(arr , n );
}