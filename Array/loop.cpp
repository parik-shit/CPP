#include <iostream>
using namespace std;
void sort(int a[] , int n ){

	for(int i = 0 ; i < n -1 ; i++){
		int min = i;
		for(int j = i +1 ; j < n ; j++){
			if(a[j] < a[min]){
				min = j;
			}
		}
		swap(a[i] , a[min]);

	}
	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<" ";
	}
}



int main(){
	int a[] = {1 ,2 , 4, 3};
	int n = 4;
	sort(a , n );


}