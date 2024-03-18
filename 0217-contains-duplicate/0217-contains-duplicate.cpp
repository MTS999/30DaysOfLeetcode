class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size=nums.size();
        
        if(size==1){
            return false;
        }
        
        for(int i=1;i<size;i++){
            if(nums[i]==nums[i-1]){
                   return true;
            }
        }
        return false;
    }
};