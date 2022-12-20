class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_map<int,int>vis;
        vis[0]++;
        stack<int>s;
        s.push(0);
        while(s.size()){
            vector<int>temp = rooms[s.top()];
            s.pop();
            for(int i: temp){
                if(!vis[i]) s.push(i);
                vis[i]++;
            } 
        }
        return vis.size() == rooms.size();
    }
};