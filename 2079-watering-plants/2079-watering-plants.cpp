class Solution {
public:
    int wateringPlants(vector<int>& p, int cap) {
        int result=0,tcap=cap;
        for(int i=0;i<p.size();i++){
            if(tcap>=p[i])
                result++;  
            else{
                result+=i; 
                result+=i+1;
                tcap=cap;
            }
            tcap-=p[i]; 
        }
        return result;
    }
};