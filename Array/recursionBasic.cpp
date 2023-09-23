#include <iostream>
using namespace std;

    
void selectionSort(int arr[]  , int n ){
    for(int i = 0 ; i < n - 1 ; i++){
     int min = i;
     for(int j = i + 1 ; j < n ; j++){
        if(arr[i] < arr[min]){
            min = j;
        }
     }
     if(min != i){
        swap(arr , min , i );
     }
    }
}
int main(){
    int arr[] = {6 , 4 , 2 };
    int n = 3;
   selectionSort(arr , 3);

}