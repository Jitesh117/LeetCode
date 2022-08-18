class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int result = 0;
        unordered_map<int,int>map;
        for(auto it:arr) map[it]++;
        vector<int>temp;
        for(auto it:map) temp.push_back(it.second);
        sort(temp.begin(),temp.end(),greater<int>());
        int n = arr.size()/2;
        for(auto it:temp){
            result++;
            n-=it;
            if(n<=0) break;
        } 
        return result;
    }
};