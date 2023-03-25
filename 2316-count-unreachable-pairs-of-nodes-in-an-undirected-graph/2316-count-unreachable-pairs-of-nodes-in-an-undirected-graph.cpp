class Solution {
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
         long long  result = ((long long)n*(n-1))/2;
        vector<vector<int>>adj(n);
        for(int i = 0; i< edges.size(); i++){
           adj[edges[i][0]].push_back(edges[i][1]);
           adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int>vis(n,0); 
        for(int i = 0; i<n; i++){
            long long  count = 0;
            if(!vis[i]){
                dfs(i, adj,vis,count);
                result -= (count * (count -1))/2;
            }
        }
        return result;
    }
    void dfs(int i, vector<vector<int>>&adj, vector<int>&vis, long long &count){
        vis[i] = 1;
        count++;
        for(auto it:adj[i]){
            if(!vis[it])
                dfs(it,adj,vis,count);
        }
    }
};