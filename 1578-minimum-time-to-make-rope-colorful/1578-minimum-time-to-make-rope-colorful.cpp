class Solution {
public:
    int minCost(string colors, vector<int>& nd) {
        int result = 0;
        for(int i = 1;i<colors.size();i++){
            if(colors[i-1] == colors[i]){
                if(nd[i-1]< nd[i])
                    result+=nd[i-1];
                else{
                    result+=nd[i];
                    nd[i] = nd[i-1];
                }
            }
        } 
        return result;
    }
};