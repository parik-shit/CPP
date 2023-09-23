//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
    private:
    long long int printer(const vector<int>arr , int s , int e){
	long long int product = 1;
	for(int i = s ; i <= e ; i++){

		 product = arr[i] * product;
		

	}
	return product;
}
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        
        int count = 0;
        for(int i = 0 ; i < n  ; i++){
            int ans;
            for(int j = i ; j < n ; j++){
               
                 ans =  printer(a , i  , j );
                if(ans < k){
                    count = count + 1;
                }
                
                
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends