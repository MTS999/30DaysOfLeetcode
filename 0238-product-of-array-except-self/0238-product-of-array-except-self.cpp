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
    int temp = 1;
    for (int i = size - 1; i >= 0; i--)
    {
     
        start[i]*=temp;
        temp*=nums[i];
    }

  
 return start;
    }
};