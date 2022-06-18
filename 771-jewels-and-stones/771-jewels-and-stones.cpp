class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>hash;
        for(auto i:jewels)
            hash[i]=1;
        int count = 0;
        for(auto i:stones)
            if(hash[i]==1)
                count++;
        return count;
    }
};