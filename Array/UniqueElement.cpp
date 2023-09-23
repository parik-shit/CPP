#include <iostream>
using namespace std;

	

int main(){

int arr[3][3];
for(int i = 0 ; i < 3 ; i++){ // loop for rows
	for(auto j = 0 ; j < 3 ; j++){ // loop for coloumns
		cin>>arr[j][i];
	}
} 


for(int i = 0 ; i < 3 ; i++){
	for(auto j = 0 ; j < 3 ; j++){
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;
}
int row = arr.size();
cout<<row;
}