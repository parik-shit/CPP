class Solution {
public:
    int binarySearch(int n) {
      int   s = 0;
      int   e = n;
      int   ans = -1;      
      int   mid = s + (e - s )/ 2;
        while(s <= e){
            int square = mid*mid;
            if(square == n ){
                
                return mid ;
                
            }
            if(square > n){
                
               e =  mid - 1;
                
            }
            else if ( square < n){
                ans = mid ;
                mid+1;
            }
            mid = s + (e  - s) / 2;
        }
        return ans ;
    }
    int mySqrt(int x){
        return binarySearch(x);
    }
};