class Solution {
public:
    vector<string> wordSubsets(vector<string>& one, vector<string>& two) {
       vector<int> mcount(26,0);
        vector<string>result;
        for(string w:two){
            vector<int>temp = count(w);
            for(int i = 0;i<26;i++)
                mcount[i] = max(mcount[i],temp[i]);
        }
        for(string w:one){
            vector<int>temp = count(w);
            int count = 0;
            for(int i = 0;i<26;i++)
                if(temp[i]>=mcount[i])
                    count++;
            if(count == 26)
                result.push_back(w);
        }
        return result;
    }
    vector<int>count(string w){
        vector<int> result(26,0);
        for(char i:w)
            result[i-'a']++;
        return result;
    }
};