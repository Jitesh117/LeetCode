class Solution {
public:
    int r,c;
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        int color[n+1];
    memset(color, -1, sizeof color);
        vector<vector<int>>adj(n+1);
        for(auto i:dislikes)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);            
        }
    for (int i = 1; i <= n;i++)
        if(color[i] == -1)
            if(!bipartiteBFS(i,color,adj))
                return false;
    return true;

    }
   bool bipartiteBFS(int src,int color[],vector<vector<int>>&adj)
    {
        queue<int>q;
        color[src] = 1;
        q.push(src);
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            for(auto it: adj[node])
            {
                if(color[it]== -1)
                {
                    color[it] = 1-color[node];
                    q.push(it);
                }
                else if(color[it] == color[node])
                    return false;
            }
        }
        return true;
    }
};