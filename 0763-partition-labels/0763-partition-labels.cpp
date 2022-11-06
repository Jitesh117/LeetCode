class Solution {
public:
    vector<int> partitionLabels(string s) {
         unordered_map<char,int>last;
        for(int i = 0; i < s.size(); i++){
            last[s[i]] = i;
        }
       
        vector<int> result;
        int prev = -1;
        int maxi = 0;
        
        for(int i = 0; i < s.size(); i++){
            maxi = max(maxi, last[s[i]]);
            if(maxi == i){
        
                result.push_back(maxi - prev);
                prev = maxi;
            }
        }
        return result; 
    }
};