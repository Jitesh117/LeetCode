class Solution {
public:
    static bool comp(pair<int,int>one, pair<int,int>two){
        return (one.second - one.first) < (two.second - two.first);
    }
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<pair<int,int>> v;
        int n = rocks.size();
        for(int i = 0;i<n;i++)
            v.push_back({rocks[i],capacity[i]});
        sort(v.begin(),v.end(),comp);
        int result = 0;
        for(int i = 0;i<n;i++)
        {
            if(additionalRocks >= (v[i].second - v[i].first)){
                additionalRocks-=(v[i].second - v[i].first);
                result++;
            }
            else
                break;
            
        }
        return result;
    }
    
};