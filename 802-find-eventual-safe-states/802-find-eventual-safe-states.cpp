class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
	vector<vector<int>> adj(n);
	vector<int> indegree(n, 0);
	int i = 0;
	
	for(auto& g : graph) {
		for(auto& it : g) {
			adj[it].push_back(i);
			indegree[i]++;
		}
		i++;
	}


	queue<int> q;

	for(int i=0; i<n; i++) {
		if(indegree[i] == 0)
            q.push(i);
	}

	vector<int> result;

	while(q.size()) {
		int node = q.front(); q.pop();

		result.push_back(node);

		for(auto& it : adj[node]) {
            indegree[it]--;
			if(indegree[it] == 0) 
                q.push(it);
		}
	}

	sort(result.begin(), result.end());

	return result;
    }
};