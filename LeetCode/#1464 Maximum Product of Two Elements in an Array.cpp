// https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/ (E)
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i, j;
        j = nums.size() - 1;
        i = j-1;
        sort(nums.begin(), nums.end());
        return((nums[i] - 1) * (nums[j] - 1 ));
    }
};
