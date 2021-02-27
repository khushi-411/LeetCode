/* Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements. */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int l = 0, i = 0; i < nums.size(); i++)
            if(nums[i] != 0)
                swap(nums[l++], nums[i]);
    }
};
