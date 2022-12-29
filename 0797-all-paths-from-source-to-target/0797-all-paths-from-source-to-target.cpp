class Solution {
public:
    vector<vector<int>>result;
    vector<int>temp;
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        dfs(0,graph);
        return result;
    }
    void dfs(int node, vector<vector<int>>&graph){
        temp.push_back(node);
        if(node == graph.size()-1) result.push_back(temp);
       
        for(auto i: graph[node])
            dfs(i,graph);
        temp.pop_back();
        
    }
};