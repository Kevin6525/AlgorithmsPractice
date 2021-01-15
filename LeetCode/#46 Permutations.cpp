// https://leetcode.com/problems/permutations/ (M)
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        dfs(nums, 0, result);
        return result;
    }
    void dfs(vector<int> &nums, int begin, vector<vector<int>> &result)
    {
        if(begin == nums.size())
        {
            result.push_back(nums);
        }
        else
        {
            for(int i = begin; i < nums.size(); i ++)
            {
                swap(nums[begin], nums[i]);
                dfs(nums, begin + 1, result);
                swap(nums[begin], nums[i]);
            } 
        }
    }
};
