class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>hash;
        int count = 0;
        for(auto i: chars)
            hash[i]++;
        for(string it:words)
        {
            unordered_map<char,int>store;
            for(char c : it)
                store[c]++;
            bool flag = true;
            for(char c : it)
                if(store[c]>hash[c])
                    flag=false;
            if(flag)
                count+=it.size();
        }   
        return count;
    }
};