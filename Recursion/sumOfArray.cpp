#include <iostream>
using namespace std;
int add(int *arr , int size) {
	int sum = 0;
	if (size == 0) {
		return 0;
	}
	if ( size == 1) {
		return arr[0];
	}
	int remainingPart = add(arr + 1, size - 1);
	sum =  arr[0] + remainingPart;

	return sum;
}

int main() {

	int arr[5] = {3 , 4, 5 , 6};
	int size = 5;
	int ans = add(arr, size);
	cout << ans;


	return 0;
}