class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>r, d;
        for(int i = 0;i<senate.size();i++){
            senate[i] == 'R'? r.push(i) : d.push(i);
        }
        int rf, df;
        while(r.size() and d.size()){
            rf = r.front();
            df = d.front();
            
            r.pop();
            d.pop();
            
            if(rf < df){
                r.push(rf + senate.size());
            }
            else{
                d.push(df + senate.size());
            }
        }
        return r.size() > d.size() ? "Radiant" : "Dire";
    }
};