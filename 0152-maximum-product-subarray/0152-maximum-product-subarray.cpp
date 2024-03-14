class Solution {
public:
    int maxProduct(vector<int>& nums) {
       
       int curr_product = 1, \
          result = INT_MIN;
       
       for (auto i: nums) {
           curr_product = curr_product * i;
           result = max(curr_product, result);
           if(curr_product == 0) {
               curr_product = 1;
           }
       }
       
       curr_product = 1;
       
       for (int i = nums.size()-1; i>=0; i--) {
           curr_product = curr_product * nums[i];
           result = max(curr_product, result);
           if(curr_product == 0) {
               curr_product = 1;
           }      
       }
       return result; 
    }
};