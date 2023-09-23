#include <iostream>
#include<vector>
using namespace std;
int firstOcc(vector <int>& arr , int n , int k ){
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = (start + end ) / 2 ;
    while(start <= end){
        if(arr[mid] == k){
            ans = mid ; 
            end = mid - 1 ;
        }
        else if (arr[mid] < k){
            start = mid + 1 ;
        }
        else if (arr[mid] > k ){
end = mid - 1 ;
        }
        mid = (start + end) / 2;


    }
    return ans;
}
int lastOcc( vector <int>& arr, int n , int k){
    
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = (start + end ) / 2 ;
    while(start <= end){
        if(arr[mid] == k){
            ans = mid ; 
            end = mid + 1 ;
        }
        else if (arr[mid] < k){
            start = mid + 1 ;
        }
        else if (arr[mid] > k ){
end = mid - 1 ;
        }
        mid = (start + end) / 2;


    }
    return ans;
}
int main(){
      pair <int , int >p;
    p.first = firstOcc(arr , n , k );
    p.second = lastOcc(arr , n , k );
    return p;
}