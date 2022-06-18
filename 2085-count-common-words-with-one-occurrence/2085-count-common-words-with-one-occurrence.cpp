class Solution {
public:
    int countWords(vector<string>& f, vector<string>& s) {
       unordered_map<string,int>one,two;
        for(auto i:f)
            one[i]++;
        for(auto i:s)
            two[i]++;
        int count = 0;
        for(auto i:one)
            if(i.second ==1 and two[i.first] == 1)
                count++;
        return count;
    }
};