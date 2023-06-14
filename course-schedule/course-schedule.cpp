class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses;
       vector<vector<int>> adj(n);
       for(auto it: prerequisites){
           adj[it[1]].push_back(it[0]);
       }
       vector<int>vis(n, 0);
       vector<int>dfsVis(n, 0);
       for(int i = 0; i < n; i++){
           if(checkCycle(i, adj, vis, dfsVis)) return false;
       }
       return true;
    }

    bool checkCycle(int node, vector<vector<int>>&adj, vector<int>&vis, vector<int>&dfsVis){
        vis[node] = 1;
        dfsVis[node] = 1;
        for(auto it: adj[node]){
            if(!vis[it]){
                if(checkCycle(it, adj, vis, dfsVis)) return true;
            }
            else if(dfsVis[it]) return true;
        }
        dfsVis[node] = 0;
        return false;
    }
};