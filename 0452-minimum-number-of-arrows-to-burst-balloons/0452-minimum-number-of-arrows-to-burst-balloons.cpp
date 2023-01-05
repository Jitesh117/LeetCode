class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int result = 1;
        sort(points.begin(),points.end(),comp);
        int end = points[0][1];
        for(int i = 1;i<points.size();i++){
            if(end< points[i][0]){
                result++;
                end = points[i][1];
            }
        }
        return result;
    }
    static bool comp(vector<int> &x, vector<int> &y){
        return x[1] < y[1];
    }
};