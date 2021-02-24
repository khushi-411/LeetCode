/* Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length. */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        int j = 0;
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[j] != nums[i])
            {
                j++;
                nums[j] = nums[i];
            }
        }
        return j+1;
    }
};
