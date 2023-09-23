  class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int size = nums.size();
        if(size == 0){return {};}
        if(size == 1)return {to_string(nums[0])};
        vector<string>v;
        int end ;
        int start = 0;
        int i = 0;
        if(nums[1] != (nums[0] + 1)){
            v.push_back(to_string(nums[0]));
             i = 1 ;
            start = i;
        }
         

       for( i  ; i < size ; i++){
         
          
           if(nums[i + 1] != (nums[i] + 1)){
               end = i;
               v.push_back(to_string(nums[start])+"->"+to_string(nums[end]));
               
               i++;
               start = i;
               
           }
          

           }
       
       if(nums[size -1 ]  != (nums[size - 2] + 1)){
            v.push_back(to_string(nums[size -1]));
        }
      
        return v;
    }
};