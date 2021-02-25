/* Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays. */

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> k;
    for(int i = 0; i < nums1.size(); i++)
    {
        k.push_back(nums1[i]);
    }
    for(int i = 0; i < nums2.size(); i++)
    {
        k.push_back(nums2[i]);
    }
    sort(k.begin(), k.end());
    double kk;
    int n = k.size();
    
    if(n % 2 != 0)
    {
        for(int i = 0; i < n; i++)
        {
            if(i == n/2)
                kk = k[i];
        }
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            if(i == n/2)
            {
                int s = k[i] + k[i-1];
                kk = s/2.0;
            }
        }
    }
    return kk;
    }
};
