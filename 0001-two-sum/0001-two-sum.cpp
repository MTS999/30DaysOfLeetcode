class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      
        
            unordered_map<int, int> mts;

    int size = nums.size();
    for (int i = 0; i < size; i++)
    {
        int wanted=target-nums[i];
        if(mts.find(wanted)!=mts.end()){
         return {mts[wanted],i};
        }
        mts.insert({nums[i],i});
    }
        return {0,0};
    }
};