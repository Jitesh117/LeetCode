class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>hash;
        for(auto i:arr)
            hash[i]++;
        vector<int> temp;
        for(auto i:hash)
            temp.push_back(i.second);
        sort(temp.begin(),temp.end(),greater<int>());
        int result = 0;
        int n = arr.size()/2;
        for(auto i:temp)
        {
            result++;
            n-=i;
            if(n<=0)
                break;
        }
        return result;
    }
};