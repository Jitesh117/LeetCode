class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
       stack<int> st;
       unordered_map<int, int> vis;
       st.push(0);
       vis[0]++;
       while(st.size()){
           vector<int> keys = rooms[st.top()];
           st.pop();
           for(auto it: keys){
               if(!vis[it]) {
                   st.push(it);
               }
                vis[it]++;
           }
       }
       return vis.size() == rooms.size();
    }
};