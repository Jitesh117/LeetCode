class Solution {
public:
    vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
        int n = quiet.size();
        vector<int> indegree(n,0), ans(n,INT_MAX);
        vector<vector<int>> g(n);
        queue<int> q;

        for(int i=0;i<richer.size();i++){
            g[richer[i][0]].push_back(richer[i][1]);
            indegree[richer[i][1]]++;
        }
       
        for(int i=0;i<n;i++){
            ans[i]=i;
            if(indegree[i]==0)
                q.push(i);
        }
        
        while(q.size()){
            int curr = q.front();
            q.pop();
            
            for(int i : g[curr]){
                if( quiet[ans[i]] > quiet[ans[curr]])
                    ans[i] = ans[curr];
                
                if(--indegree[i]==0)
                    q.push(i);
            }
        }
        return ans;
    }
};