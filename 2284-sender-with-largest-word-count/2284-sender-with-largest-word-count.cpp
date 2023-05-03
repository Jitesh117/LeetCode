class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        map<string,int>map;
        
        int n = senders.size();
        for(int i = 0;i<n;i++){
            int space = 0;
            for(auto c:messages[i]){
                if(c == ' ') space++;
                
            }
            map[senders[i]] += (space + 1);
        }
        string result;
        int count = 0;
        for(auto it:map){
            if(it.second >= count){
                count = it.second;
                result = it.first; 
            }
        }
        return result;
    }
};