// https://leetcode.com/problems/richest-customer-wealth/ (E)
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = -1;
        for(int i = 0; i < accounts.size(); i ++)
        {
            int sum = 0;
            for(int k = 0; k < accounts[i].size(); k ++)
            {
                sum += accounts[i][k];
                if(sum > max)
                {
                    max = sum;
                }
            }
        }
        return max;
    }
};
