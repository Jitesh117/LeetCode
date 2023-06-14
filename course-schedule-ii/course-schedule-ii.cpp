class Solution {
public:
    vector<vector<int>> adj;
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        adj = vector<vector<int>>(numCourses);
        if(!canFinish(numCourses, prerequisites)) return {};
        stack<int>st;        
        vector<int> vis(numCourses, 0);
        for(int i = 0; i < numCourses; i++){
            if(!vis[i]) topoSort(i, st, vis);
        }
        vector<int> result;
        while(st.size()){
            result.push_back(st.top());
            st.pop();
        }
        return result;
    }
    void topoSort(int i, stack<int>& st, vector<int>& vis){
        vis[i] = 1;
        for(auto it: adj[i]){
            if(!vis[it]) topoSort(it, st, vis);
        }
        st.push(i);
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses;
       for(auto it: prerequisites){
           adj[it[1]].push_back(it[0]);
       }
       vector<int>vis(n, 0);
       vector<int>dfsVis(n, 0);
       for(int i = 0; i < n; i++){
           if(checkCycle(i, vis, dfsVis)) return false;
       }
       return true;
    } 
    bool checkCycle(int node, vector<int>&vis, vector<int>&dfsVis){
        vis[node] = 1;
        dfsVis[node] = 1;
        for(auto it: adj[node]){
            if(!vis[it]){
                if(checkCycle(it, vis, dfsVis)) return true;
            }
            else if(dfsVis[it]) return true;
        }
        dfsVis[node] = 0;
        return false;
    }
};