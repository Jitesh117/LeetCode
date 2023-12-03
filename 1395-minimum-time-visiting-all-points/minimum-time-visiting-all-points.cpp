class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int result = 0;
        for(int i = 1; i < points.size(); i++){
            int xdiff = abs(points[i][0] - points[i - 1][0]);
            int ydiff = abs(points[i][1] - points[i - 1][1]);
            result += max(xdiff, ydiff);
        }

        return result;
    }
};