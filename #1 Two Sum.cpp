// https://leetcode.com/problems/two-sum/ (E)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) 
        {
            int remainder = target - nums[i];    
            if(m.count(remainder) > 0)
            {
                result.push_back(m[remainder]);
                result.push_back(i);
                return result;
            }
            m[nums[i]] = i;
        }
        return result;
    }
};
