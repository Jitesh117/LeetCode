class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& prereq) {
        if(!canFinish(n,prereq))
            return {};
        return topoBFS(n,prereq);
    }
    vector<int>topoBFS(int n, vector<vector<int>>prereq)
    {
        vector<vector<int>>adj(n);
        for(auto it:prereq)
        {
            adj[it[1]].push_back(it[0]);
        }
        queue<int>q;
        vector<int>indegree(n,0);
        for(int i = 0;i<n;i++)
            for(auto it:adj[i])
                indegree[it]++;
        
        for(int i = 0;i<n;i++)
            if(indegree[i] == 0)
                q.push(i);
        vector<int>result;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            result.push_back(node);
            for(auto it:adj[node])
            {
                indegree[it]--;
                if(indegree[it]==0)
                    q.push(it);
            }
        }
        return result;
    }
     bool canFinish(int n, vector<vector<int>>& prereq) {
        vector<vector<int>>adj(n);
        for(auto it:prereq)
        {
            adj[it[1]].push_back(it[0]);
        }
        return !checkcycle(n,adj);
    }
    bool checkcycle(int n,vector<vector<int>>&adj)
    {
        queue<int> q;
        vector<int>indegree(n,0);
        for(int i = 0;i<n;i++)
        {
            for(auto it:adj[i])
                indegree[it]++;
        }
        for(int i = 0;i<n;i++)
            if(indegree[i] == 0)
                q.push(i);
        int count = 0;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            count++;
            for(auto it: adj[node])
            {
                indegree[it]--;
                if(indegree[it] == 0)
                    q.push(it);
            }
        }
        return !(count == n);
    }
};