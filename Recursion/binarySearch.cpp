#include <iostream>
using namespace std;
bool binarySearch(int *arr , int size  , int k) {
	int s = 0;
	int e = size - 1;
	int mid = (s + e) / 2;
	if (size == 0) {
		return false;
	}
	if (arr[mid] == k) {
		return true;
	}
	if (arr[s] == k ) {
		return true;

	}
	if (arr[e] == k) {
		return true;
	}

	if (arr[mid] > k ) {
		e = mid - 1;
		return binarySearch(arr ,  size - e,  k);
	}
	else {
		s = mid + 1;
		return binarySearch(arr + s,  size - s,  k);
	}

}

int main() {
	int arr[5] = {2 , 3 , 4 , 5 , 6};
	int size = 5;
	int k = 6;
	bool ans = binarySearch(arr, size , k);
	cout << ans;


	return 0;
}