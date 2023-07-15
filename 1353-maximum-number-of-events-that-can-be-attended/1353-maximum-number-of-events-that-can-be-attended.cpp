class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        priority_queue<int, vector<int>, greater<int>> pq;
        sort(events.begin(), events.end());
        int i = 0, result = 0, n = events.size();
        for(int d = 1; d <= 100000; d++){
            while( pq.size() and pq.top() < d) pq.pop();
            while(i < n and events[i][0] == d) pq.push(events[i++][1]);
            if(pq.size()){
                pq.pop();
                result++;
            }
        }
        return result;
    }
};