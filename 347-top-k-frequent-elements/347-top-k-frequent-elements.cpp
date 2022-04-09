class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        priority_queue<pair<int,int>> pq;  
        unordered_map<int,int>::iterator itr;
        for(itr=m.begin();itr!=m.end();itr++){
            pq.push(make_pair(itr->second,itr->first));
        }
        vector<int> ans(k);
        for(int i=0;i<k;i++){
            ans[i]=pq.top().second;
            pq.pop();
        }
        return ans;
    }
};