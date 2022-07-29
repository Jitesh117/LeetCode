class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>one,two;
        for(auto it:s)
            one[it]++;
        for(auto it:t)
            two[it]++;
        int result = 0;
        for(auto it:one)
        {
            if(two[it.first]<it.second)
                result+=it.second-two[it.first];
        }
       return result; 
    }
};