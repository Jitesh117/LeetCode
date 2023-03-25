class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int result = 0;
        for(int i = 0;i<items.size();i++){
            if(ruleKey == "type"){
                if(items[i][0] == ruleValue)result++;
            }
            else if(ruleKey == "color"){
                if(items[i][1] == ruleValue)result++;
            }
            else{
                if(items[i][2] == ruleValue)result++;
            }
        }
        return result;
    }
};