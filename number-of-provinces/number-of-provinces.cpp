class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>>adj(n);
        for(int i = 0; i < n; i++){
            for(int j = 0;j < n; j++){
                if(isConnected[i][j]){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        vector<bool>vis(n,0);
        int result = 0;
        for(int i = 0; i < n; i++){
            if(!vis[i]){
                result++;
                dfs(i, vis, adj);
            }
        }
        return result;
    }
    void dfs(int i, vector<bool>& vis, vector<vector<int>>&adj){
        vis[i] = true;
        for(auto j: adj[i]){
            if(!vis[j])
                dfs(j,vis,adj);
        }
    }
};