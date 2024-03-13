class Solution {
public:
    int missingNumber(vector<int>& nums) {
          int n = nums.size();
        int sumActual = (n * (n+1))/2;
        int NumSum = 0;
        for(int i = 0; i < n; i++){
            NumSum += nums[i];
        }  
        return  sumActual-NumSum;
    }
};