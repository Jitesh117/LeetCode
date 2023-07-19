class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b){
            return a[1] < b[1];
        }

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), cmp);
        int n = intervals.size();
        int keep = 1;
        int prev = 0;
        for(int i = 1; i < n; i++){
            if(intervals[i][0] >= intervals[prev][1]){
                keep++;
                prev = i;
            }
        }        
        return n - keep;
    }
    
};