/* A peak element is an element that is strictly greater than its neighbors.

** Given an integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks. */

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s = nums.size();
        
       for(int i = 0; i < s-1; i++)
       {
           if(nums[i] > nums[i+1])
               return i;
       }
        return s-1;
    }
};
