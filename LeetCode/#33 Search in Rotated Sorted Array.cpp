// https://leetcode.com/problems/search-in-rotated-sorted-array/ (M)
class Solution {
public:
    int search(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        for(int i = 0; i < nums.size(); i ++)
        {
            numMap.insert(pair<int, int>(nums[i], i));
        }
        for(auto itr = numMap.begin(); itr != numMap.end(); itr++)
        {
            if(itr->first == target)
            {
                return(itr->second);
            }
        }
        return -1;
    }
};
