class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>>graph(n+1);
        for(auto edge : times)
        {
            int from = edge[0];
            int to = edge[1];
            int cost = edge[2];
            graph[from].push_back(make_pair(cost,to));
        }
        vector<int> dist(n+1,INT_MAX);
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        dist[k] = 0;
        pq.push(make_pair(0,k));
        while(!pq.empty())
        {
            pair<int,int> temp = pq.top();
            pq.pop();
            for(auto neighbour: graph[temp.second])
            {
                int tdis = neighbour.first+dist[temp.second];
                 if(tdis<dist[neighbour.second])
                { 
                     dist[neighbour.second] = tdis;
                     pq.push(make_pair(tdis,neighbour.second));
                 }
                
            }
        }
        int maxtime= INT_MIN;
        for(int i = 1;i<dist.size();i++)
            if(maxtime<dist[i])
                maxtime = dist[i];
        if(maxtime==INT_MAX)
            return -1;
        return maxtime;
    }
};