// https://leetcode.com/problems/minimum-time-visiting-all-points/ (E)
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int travel = 0;
        for(int i = 0; i < points.size() - 1; i ++)
        {
            int horizon = abs(points[i][0] - points[i + 1][0]);
            int vert = abs(points[i][1] - points[i + 1][1]);
            if(vert > horizon)
            {
                travel += vert;
            }
            else
            {
                travel += horizon;
            }
        }
        return travel;
    }
};
