// https://leetcode.com/problems/remove-outermost-parentheses/ (E)
class Solution {
public:
    string removeOuterParentheses(string S) {
        stack<char> track;
        string result;
        for(int i = 0; i < S.size(); i ++)
        {
            if(S[i] == ')')
            {
                track.pop();
            }
            if(!track.empty())
            {
                result += S[i];
            }
            if(S[i] == '(')
            {
                track.push(i);
            }
        }
        return result;
    }
};
