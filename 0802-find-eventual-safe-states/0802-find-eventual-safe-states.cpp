class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>topo;
        int n = graph.size();
        vector<int>indegree(n,0);
        vector<vector<int>>adj(n); 
        int i = 0;
	
    for(auto& g : graph) {
		for(auto& it : g) {
			adj[it].push_back(i);
			indegree[i]++;
		}
		i++;
	}

        
        queue<int>q;
        for(int i = 0;i<n;i++){
            if(indegree[i] == 0)
                q.push(i);
        }
        
        while(q.size()){
            int node = q.front();
            q.pop();
            topo.push_back(node);
            for(auto it:adj[node]){
               indegree[it]--;
               if(indegree[it] == 0){
                   q.push(it);
               }
            }
        }
        sort(topo.begin(),topo.end());
        return topo;
    }
};