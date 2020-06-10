class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums[0]>target)
        {
            return 0;
        }
        if(nums[nums.size()-1]<target)
        {
            return nums.size();
        }
        int i=0;
        while(nums[i]<target)
        {
            i++;
        }return i;
        
        
    }
};