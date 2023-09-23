#include <iostream>
using namespace std;

int main(){

	int n , m , k , H ;
	cin>>n >> m >> k >> H;
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		cin>>arr[i];
	}
	
	int count = 0;
	for(int i = 0 ; i < n ; i++){
		
		for(int j = 1 ; j <=m -1 ; j++){
			if(j*k == abs(H - arr[i])){
				count++;
			}
		}


	}
	cout<<count;
	

	return 0;
}