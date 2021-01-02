//https://leetcode.com/problems/palindrome-partitioning/ (M)
class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> temp;
        if(s.size() < 2)
        {
            temp.push_back(s);
            result.push_back(temp);
            temp.pop_back();
            return result;
        }
        palinSearch(s, 0, result, temp);
        return result;
    }
    void palinSearch(string s, int begin, vector<vector<string>> &result, vector<string> &temp)
    {
        if(begin >= s.size())
        {
            result.push_back(temp);
        }
        for(int i = begin; i < s.size(); i ++)
        {
            if(isPalin(s, begin, i))
            {
                temp.push_back(s.substr(begin, i - begin + 1));
                palinSearch(s, i + 1, result, temp);
                temp.pop_back();
            }
        }
    }
    bool isPalin(string s, int start, int end)
    {
        while(start < end)
        {
            if(s[start] != s[end])
            {
                return false;
            }
            start ++;
            end --;
        }
        return true;
    }
};
