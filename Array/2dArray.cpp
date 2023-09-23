#include <iostream>
using namespace std;
bool isPresent(int arr[][4] , int target ,int row,  int col ){
	for(int row = 0 ; row < 3 ; row++)
	{
		for(int col = 0 ; col < 4 ; col++){
			if(arr[row][col] == target)
				return true ;
		}
	}	
	return false;
}
int main(){

	int arr[3][4];

	//for taking input of the 2D array.
	for(int i = 0 ; i < 3 ; i++)
	{
		for(int j = 0 ; j < 4 ; j++){
			cin>>arr[i][j];
		}
	}	
	//for printing the 2D array.
	for(int i = 0 ; i < 3 ; i++)
	{
		for(int j = 0 ; j < 4 ; j++){
			cout<<arr[i][j]<< " " ;
		}
		cout<<endl;
	}

int target;
	cout<<"Enter the element to search: " <<endl;
	cin>>target;
	if(isPresent(arr, target , 3 , 4 ))
		cout<<"Element found " << endl;

	else{
		cout<<"Not found "<<endl;
	}
}