// https://leetcode.com/problems/running-sum-of-1d-array/ (E)
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        vector<int> sum;
        int currentSum = nums[0];
        sum.push_back(nums[0]);
        for(int i = 1; i < nums.size(); i++)
        {
            currentSum += nums[i];
            sum.push_back(currentSum);
        }
        return sum;
    }
};
