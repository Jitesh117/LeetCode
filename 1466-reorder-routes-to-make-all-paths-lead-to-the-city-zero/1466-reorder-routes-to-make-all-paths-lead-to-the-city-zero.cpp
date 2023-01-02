class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<int> vis(n);
        vector<vector<int>> adj(n), back(n);
        queue<int> q;
        q.push(0);
        int result = 0;
        
        for (auto c : connections){
            adj[c[0]].push_back(c[1]);
            back[c[1]].push_back(c[0]);
        }
        
        while (!q.empty()){
            int curr = q.front();
            q.pop();
            vis[curr] = 1;

            for (auto a: adj[curr]){
                if (!vis[a]){
                    result++;
                    q.push(a);
                }
            }
            for (auto b: back[curr]){
                if (!vis[b]) q.push(b);
            }
        }
        return result;
    }
};