class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int ind = -1;
        int mandist = INT_MAX;
        for(int i = 0;i<points.size();i++)
        {
            if(points[i][0] == x || points[i][1] == y)
            {
                if(abs(points[i][0]-x) + abs(points[i][1]-y)<mandist)
                { 
                    ind = i;
                    mandist = abs(points[i][0]-x) + abs(points[i][1]-y);
                }
                
            }
        }
        return ind;
    }
};