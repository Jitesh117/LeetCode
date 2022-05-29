class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> result;
        unordered_map<string,int> tab;
        if(s.size()<10)
            return result;
        for(int i = 0;i<s.size()-9;i++)
        {
            string temp = s.substr(i,10);
            tab[temp]++;
        }
        for(auto i: tab)
            if(i.second>1)
                result.push_back(i.first);
        return result;
    }
};