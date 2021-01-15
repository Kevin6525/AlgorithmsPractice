// https://leetcode.com/problems/longest-palindromic-substring/submissions/ (M)
class Solution {
public:
    string longestPalindrome(string s) 
    {
        if(s.size()< 2)
        {
            return s;
        }
        int start = 0;
        int end  = 0;
        for(int i = 0; i < s.size(); i++)
        {
            //Palindrome of odd number: middle has no mirror
            int palin1 = searchPalindrome(s, i, i);
            //Palindrome of even number: each character has mirror
            int palin2 = searchPalindrome(s, i, i+1);
            int length = max(palin1, palin2);
            if(length > end - start)
            {
                end = i + (length/2);
                start = i - ((length-1)/2);
            }
        }
        return s.substr(start, end - start + 1);
    }
    int searchPalindrome(string s, int left, int right)
    {
        while(left >= 0 && right <s.size() && s[left] == s[right])
        {
            left --;
            right ++;
        }
        return right - left -1;
    }
};
