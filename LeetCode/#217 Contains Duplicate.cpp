// https://leetcode.com/problems/contains-duplicate/submissions/ (E)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> numbers;
        for(int i= 0; i < nums.size(); i++)
        {
            if(numbers.count(nums[i]) >= 1)
            {
                return true;
            }
            numbers.insert(nums[i]);
        }
        return false;
    }
};
