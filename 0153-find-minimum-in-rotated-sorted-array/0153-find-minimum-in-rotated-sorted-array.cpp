class Solution {
public:
    int findMin(vector<int>& nums) {
         int size = nums.size();
    int start = 0;
    int end = size - 1;
    
  while (start < end)
    {
        int mid = (start + end) / 2;
        if (nums[mid] >= nums[start] && nums[start] > nums[end])
        {
            start = mid +1;
        }
        else if (nums[mid] >= nums[start] && nums[start] < nums[end])

        {
            end = mid ;
        }
        else if (nums[mid] <= nums[start] && nums[start] > nums[end])

        {
            end = mid;
        }
        else if (nums[mid] <= nums[start] && nums[start] < nums[end])

        {
            end = mid;
        }
    }  
        return nums[start];

    }
};