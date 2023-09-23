#include <iostream>
#include <array>
#include <vector>
using namespace std;
int main(){
	/*int arr[] = {4 , 1, 3, 2};
	array<int, 4> a = {1 ,3 , 4 , 5}; // what is a vector ?
	                                  //when there is no space in the vector then a new vector 
	                                  //is created which is double the size of the original array 
	                                  //and copies all the data from the previous vector to the new vector.
	                                  //It is dynamic in nature     
	for(int i = 0 ; i < a.size() ; i++){
		cout<<a[i]<<endl;
	}*/

	vector<int> a;
	a.push_back(9999999);
	a.push_back(99564564);
	cout << "Size of vector -> " << a.capacity()<<endl;
	cout << "Vector at position -> " << a.at(1)<<endl;
}
