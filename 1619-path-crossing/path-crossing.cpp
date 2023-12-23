class Solution {
public:
    bool isPathCrossing(string path) {
       set< pair<int, int> > st;
        int p = 0, q = 0;
        st.insert({0, 0});
        for(int i=0; i<path.size(); i++){
            if(path[i] == 'N')
                p += 1;
            else if(path[i] == 'E')
                q += 1;
            else if(path[i] == 'W')
                q -= 1;
            else
                p -= 1;
            
            if(st.count({p, q}) > 0)
                return true;
            st.insert({p, q});
        }
        return false; 
    }
};