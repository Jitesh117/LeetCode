class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        stack<int>st;
        unordered_map<int,int> vis;
        vis[0]++;
        st.push(0);
        while(st.size()){
            vector<int>keys = rooms[st.top()];
            st.pop();
            for(auto key: keys){
                if(!vis[key])
                    st.push(key);
                vis[key]++;
            }
        }
        return vis.size() == rooms.size();
    }
};