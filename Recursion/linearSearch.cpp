#include <iostream>
using namespace std;
bool isPresent(int *arr , int size , int k) {
	if (arr[0] == k) {
		return true;
	}
	if (size == 0) {
		return false;
	}
	else {

		bool remainingPart = isPresent(arr + 1, size - 1 , k);
		return remainingPart;
	}


}

int main() {
	int arr[5] = {2 , 3 , 4 , 5 , 6};
	int size = 5;
	int k = 10;
	bool ans = isPresent(arr, size , k);
	cout << ans;


	return 0;
}