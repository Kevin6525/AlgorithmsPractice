//https://leetcode.com/problems/kth-largest-element-in-an-array/ (M)
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        return(nums[nums.size()-k]);
    }
};
