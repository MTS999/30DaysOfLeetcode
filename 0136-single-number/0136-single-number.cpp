class Solution {
public:
    int singleNumber(vector<int>& nums) {
        

         
    int ans = 0;
    int size=nums.size();
    for (int i = 0; i<size; i++)
    {
		ans ^=nums[i];
    }
	return ans;
    }
};