class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        const int n = graph.size();
        vector<int>color(n, -1);
        for(int i = 0; i < n; i++){
            if(color[i] == -1)
                if(!bipartiteBFS(i, graph, color)) return false;
        }
        return true;
    }
    bool bipartiteBFS(int src, vector<vector<int>>&adj, vector<int>&color){
        color[src] = 1;
        queue<int>q;
        q.push(src);
        while(q.size()){
            int node = q.front();
            q.pop();
            for(auto it: adj[node]){
                if(color[it] == -1){
                    color[it] = 1 - color[node];
                    q.push(it);
                }
                else if(color[it] == color[node]){
                    return false;
                }
            }
        }
        return true; 
    }
};