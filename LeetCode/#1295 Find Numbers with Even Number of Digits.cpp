// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/submissions/ (E)
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int total = 0;
        for(int i = 0; i < nums.size(); i ++)
        {
            int count = 1;
            while(nums[i] / 10 != 0)
            {
                nums[i] /= 10;
                count ++;
            }
            if(count % 2 == 0)
            {
                total ++;
            }
        }
        return total;
    }
};
