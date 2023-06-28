class Solution
{
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>> &prerequisites, vector<vector<int>> &queries){
        vector<bool> ans;
        vector<int> indeg(numCourses, 0);

        unordered_map<int, vector<int>> adj;
        for (int i = 0; i < (prerequisites.size()); i++){
            int u = prerequisites[i][0];
            int v = prerequisites[i][1];
            adj[u].push_back(v);
            indeg[v]++;
        }
        queue<int> q;

        for (int i = 0; i < indeg.size(); i++){
            if (indeg[i] == 0){
                q.push(i);
            }
        }
        unordered_map<int, unordered_set<int>> mp;
        while (q.size()){
            int node = q.front();
            q.pop();
            for (auto nbr : adj[node]){
                for (auto ancestors : mp[node]){
                    mp[nbr].insert(ancestors);
                }
                mp[nbr].insert(node);
            }
            for (auto nbr : adj[node]){
                indeg[nbr]--;
                if (indeg[nbr] == 0){
                    q.push(nbr);
                }
            }
        }

        for (int i = 0; i < queries.size(); i++){
            int u = queries[i][0];
            int v = queries[i][1];

            if (mp[v].find(u) != mp[v].end()){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        for (auto it = mp.begin(); it != mp.end(); it++){
            for (auto val : it->second){
            }
        }
        return ans;
    }
};