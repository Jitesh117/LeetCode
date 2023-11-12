class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        unordered_map<int, vector<int>> bus_routes;
        for(int i = 0; i < routes.size(); i++){
            for(auto j : routes[i]){
                bus_routes[j].push_back(i);
            }
        }
        unordered_map<int, int>vis;
        queue<pair<int, int>> bfs;
        bfs.push({source, 0});
        vis[source]++;
        while(bfs.size()){
            int stop = bfs.front().first, num_bus = bfs.front().second;
            bfs.pop();
            if(stop == target) return num_bus;
            for(int i : bus_routes[stop]){
                for(int j : routes[i]){
                    if(!vis[j]){
                        bfs.push({j, num_bus + 1});
                        vis[j]++;
                    }
                }
                routes[i].clear();
            }
        }
        return -1;
    }
};