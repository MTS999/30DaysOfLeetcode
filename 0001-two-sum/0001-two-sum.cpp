class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
          vector<int> nums1;
    int size = nums.size();
    unordered_map<int, int> mts;
    for (int i = 0; i < size; i++)
    {
        if (mts.find(target - nums[i]) != mts.end())
        {
            nums1.push_back(mts[target - nums[i]]);
            nums1.push_back(i);
        }

        mts[nums[i]] = i;
    }
   return nums1;
    }
};