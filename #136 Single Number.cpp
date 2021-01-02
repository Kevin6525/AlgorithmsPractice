// https://leetcode.com/problems/single-number/ (E)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_multimap<int,int> numMap;
        for(int i: nums)
        {
            numMap.insert(pair<int, int>(i, 0));
        }
        for(int i: nums)
        {
            if(numMap.count(i) == 1)
            {
                return i;
            }
        }
        return -1;
    }
};
