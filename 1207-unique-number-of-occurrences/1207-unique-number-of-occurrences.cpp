class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
     unordered_map<int,int> count;
     unordered_map<int,int> freq;
        for(int i:arr)
            count[i]++;
       for(auto it:count){
           if(freq[it.second] != 0)
               return false;
           freq[it.second] = 1;
       } 
        return true;
    }
};