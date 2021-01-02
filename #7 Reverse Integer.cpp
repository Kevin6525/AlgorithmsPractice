// https://leetcode.com/problems/reverse-integer/ (E)
class Solution {
public:
    int reverse(int x) {
        int res = 0;
        int temp;
        while(x != 0)
        {
            temp = x % 10;
            x /= 10;
            if(res > INT_MAX/10 || res < INT_MIN/10)
            {
                return 0;
            }
            res = res * 10 + temp;
        }
        return res;
    }
};
