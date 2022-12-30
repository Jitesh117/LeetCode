class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1) return -1;
        int nsize = connections.size();
        vector<vector<int>>adj(n);
        for(int i = 0;i<nsize;i++)
        {
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
        }
        int count = 0; 
        vector<int>vis(n,0);
        for(int i = 0;i<n;i++)
            if(!vis[i])
            {
                dfs(i,adj,vis);
                count++;
            }
        return count-1;
    }
    void dfs(int node,vector<vector<int>>&adj,vector<int>&vis){
        vis[node] = 1;
        for(auto i:adj[node])
            if(!vis[i])
                dfs(i,adj,vis);
    }
};