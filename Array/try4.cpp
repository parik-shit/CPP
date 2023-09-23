#include <iostream>
#include <string>
using namespace std; 

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n ; i++){
		cin>>arr[i];
	}

	int hash[10] = {0};
	for(int i = 0 ; i < n ; i++){
		hash[arr[i]] = hash[arr[i]] + 1;
	}

	int q;
	while(q--){
		int number;
		cin>>number;
		cout<<hash[number]<<endl;
	}
}