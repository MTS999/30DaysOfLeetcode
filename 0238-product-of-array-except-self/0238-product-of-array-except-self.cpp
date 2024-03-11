class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
            int size = nums.size();
    vector<int> start(size);
    start[0]=1;

    for (int i = 1; i < size; i++)
    {
        start[i] = nums[i - 1] * start[i - 1];
    }
    int temp = nums[size - 1];
    nums[size - 1] = 1;
    for (int i = size - 2; i >= 0; i--)
    {
        int answer = temp * nums[i + 1];
        temp = nums[i];
        nums[i] = answer;
    }

    for (int i = 0; i < size; i++)
    {
        nums[i] = nums[i] * start[i];
    }
 return nums;
    }
};