class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
      int xdiff = c[1][0] - c[0][0];
      int ydiff = c[1][1] - c[0][1];
        
        for(int i = 2;i<c.size();i++){
            int x = c[i][0] - c[0][0];
            int y = c[i][1] - c[0][1];
            
            if(x*ydiff !=y*xdiff)
                return false;
        }
        return true;
    }
};