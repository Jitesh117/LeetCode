class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
       int n = numCourses;
       vector<vector<int>> adj(n);
       vector<int>vis(n,0), dfsVis(n,0);
       for(int i = 0; i < prerequisites.size(); i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
       } 
       for(int i = 0; i < n; i++){
           if(!vis[i]){
               if(checkCycle(i, adj, dfsVis, vis)) return false;
           }
       }
       return true;
    }
    bool checkCycle(int i, vector<vector<int>>&adj, vector<int>& dfsVis, vector<int>&vis){
       vis[i] = 1;
       dfsVis[i] = 1;
       for(auto it: adj[i]){
           if(!vis[it]){
               if(checkCycle(it, adj, dfsVis, vis)) return true;
           }
           else if(dfsVis[it]) return true;
       }
       dfsVis[i] = 0;
       return false;
    }
};