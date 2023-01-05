class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        // constructing adjacency matrix
		vector<vector<pair<int,int>>> graph(n);
        for(auto edge: redEdges)
            graph[edge[0]].push_back({edge[1],0}); 
        for(auto edge: blueEdges)
            graph[edge[0]].push_back({edge[1],1}); 
        vector<int> dist(n,-1); 
        
        queue<vector<int>> q;
        q.push(vector<int>{0,0,-1});
        
        while(q.size()) {
            auto node = q.front();
            q.pop();
            if(dist[node[0]] == -1)
                dist[node[0]] = node[1];
            
            for(auto &adj : graph[node[0]]) {
                if(node[2] != adj.second && adj.first!= -1) {
                    q.push(vector<int>{adj.first, node[1] + 1, adj.second});
                    adj.first = -1;
                }
            }
        }
        return dist;
    }
};