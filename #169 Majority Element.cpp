class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxInt;
        unordered_map<int,int> m;
        for(int i = 0; i < nums.size(); i ++)
        {
            m[nums[i]] ++;
        }
        int max = 0;
        for(auto itr = m.begin(); itr != m.end(); itr ++)
        {
            if(itr->second > max)
            {
                max = itr->second;
                maxInt = itr->first;
            }
        }
        return maxInt;
    }
};
