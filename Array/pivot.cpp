#include <iostream>
using namespace std;
int pivot(int arr[5] , int n) {
	int s = 0;
	int e = n - 1;
	while (s < e ) {
		int mid = (s + e) >> 1;
		if (arr[mid] >= arr[e]) {
			s = mid + 1;

		}
		else {
			e = mid ;
		}
	}
	return s;
}

int main() {
	int arr[5] = {3,4,5,1,2};
	int bling = pivot(arr, 5);
	            cout << bling;


	return 0;
}

/*class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;

        while(s < e ){
        int mid = s + ((e - s ) >>1) ;
            if(target >= nums[e] ){
                e = mid - 1;
            }
            else{
            	s = mid + 1;
            }

        }
        if(nums[s] == target){
        	return true;
        }
        else{
        	return false;
        }
    }
};*/