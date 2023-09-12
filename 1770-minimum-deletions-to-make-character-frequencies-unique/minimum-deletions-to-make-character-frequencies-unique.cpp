class Solution {
public:
    int minDeletions(string s) {
        int result = 0;
        unordered_map<char, int> map;
        unordered_set<int> frequencies;
        for(char c : s) 
            map[c]++;
        for(auto it: map){
            int freq = it.second;
            while(freq > 0 and frequencies.find(freq) != frequencies.end()){
                freq--;
                result++;
            }
            frequencies.insert(freq);
        }
        return result;
    }
};