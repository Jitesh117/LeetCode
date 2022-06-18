class Solution {
public:
    vector<string> uncommonFromSentences(string first, string second) {
        unordered_map<string,int>hash;
        string word;
        for(auto i:first)
        {
            if(i == ' ')
                {
                    hash[word]++;
                    word="";
                }
            else
                word+=i;
        }
        hash[word]++;
        word="";
        for(auto i:second)
        {
            if(i == ' ')
            {
                hash[word]++;
                word="";
            }
            else
                word+=i;
        }
        hash[word]++;
        vector<string>result;
        for(auto i:hash)
            if(i.second==1)
                result.push_back(i.first);
        return result;
        
    }
};