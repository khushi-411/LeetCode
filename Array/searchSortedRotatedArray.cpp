/* Given the array nums after the rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums. */

class Solution {
public:
    int binarySearch(vector <int> &nums, int low, int high, int target)
    {
        if(low > high)
            return -1;
        int mid = low + (high-low)/2;
        if(nums[mid] == target)
            return mid;
        else if(nums[mid] < target)
            return binarySearch(nums, mid+1, high, target);
        else
            return binarySearch(nums, low, mid-1, target);
    }
    int findPivot(vector <int> &nums, int low, int high, int target)
    {
        if(low > high)
            return -1;
        if(low == high)
            return low;
        int mid = low + (high-low)/2;
        if(mid < high && nums[mid] > nums[mid+1])
            return mid;
        if(low < mid && nums[mid] < nums[mid-1])
            return mid-1;
        if(nums[low] >= nums[mid])
            return findPivot(nums, low, mid-1, target);
        else
            return findPivot(nums, mid+1, high, target);
    }
    int search(vector<int>& nums, int target) {
        int pivot = findPivot(nums, 0, int(nums.size())-1, target);
        if(pivot == -1)
            return binarySearch(nums, 0, int(nums.size())-1, target);
        if(nums[pivot] == target)
            return pivot;
        if(nums[0] <= target)
            return binarySearch(nums, 0, pivot-1, target);
        else
            return binarySearch(nums, pivot+1, int(nums.size())-1, target);
    }
};
