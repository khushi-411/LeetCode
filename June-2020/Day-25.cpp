/* Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

* There is only one repeated number in nums, return this repeated number. */

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int k;
        for(int i = 1; i <= nums.size(); i++)
        {
            if(nums[i] == nums[i-1])
            {
                k = nums[i];
                break;
            }
        }
        return k;
    }
};
