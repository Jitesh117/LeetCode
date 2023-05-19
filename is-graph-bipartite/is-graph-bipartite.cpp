class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int>color(n,-1);
        for(int i = 0;i<n;i++){
            if(!bfs(i,color,graph)){
                return false;
            }
        }
        return true;
    }
    bool bfs(int i, vector<int>color, vector<vector<int>>&graph){
        queue<int>q;
        color[i] = 1;
        q.push(i);
        while(q.size()){
            int par = q.front();
            q.pop();
            for(auto it:graph[par]){
                if(color[it] == -1){
                    color[it] = 1 - color[par];
                    q.push(it);
                }
                else if(color[it] == color[par]) 
                    return false;
            }
        }
        return true;
    }
};