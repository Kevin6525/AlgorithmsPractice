//https://leetcode.com/problems/palindrome-partitioning/ (M)
class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> temp;
        //If it's just one character size for string then push it onto the result
        if(s.size() < 2)
        {
            temp.push_back(s);
            result.push_back(temp);
            temp.pop_back();
            return result;
        }
        //Otherwise we will search for all palindromes
        palinSearch(s, 0, result, temp);
        return result;
    }
    // Palindrome search function
    void palinSearch(string s, int begin, vector<vector<string>> &result, vector<string> &temp)
    {
        // Exit condition, push all the palindromes in temp into result
        if(begin >= s.size())
        {
            result.push_back(temp);
        }
        // Iterate through if it's a palindrome push it into temp
        for(int i = begin; i < s.size(); i ++)
        {
            if(isPalin(s, begin, i))
            {
                temp.push_back(s.substr(begin, i - begin + 1));
                //Slice it by adding one to beginning and recursive call to search
                palinSearch(s, i + 1, result, temp);
                temp.pop_back();
            }
        }
    }
    // Check if palindrome, can also just check if reverse is equal to the original
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
