// https://leetcode.com/problems/valid-palindrome/ (E)
#include <string>
#include <algorithm>
class Solution {
public:
    bool isPalindrome(string s) {
        prepString(s);
        string temp;
        temp = s;
        reverse(s.begin(), s.end());
        if(temp == s)
        {
            return true;
        }
        return false;
    }
    void prepString(string &s)
    {
        for(int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
            if(!isalnum(s[i]))
            {
                s.erase(i,1);
                i--;
            }
        }
    }
};
