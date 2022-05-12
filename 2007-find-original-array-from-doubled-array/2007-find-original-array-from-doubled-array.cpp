class Solution {
public:
    vector<int> findOriginalArray(vector<int>& c) {
        if(c.size()%2==1) 
            return {};
        
        map<int,int> mp; 
        vector<int> ans;
        for(int i = 0;i<c.size();i++)
            mp[c[i]]++;
        
        for(auto m = mp.rbegin(); m!=mp.rend(); m++)
        {
            int num = (*m).first, freq = (*m).second;
            if(num==0) 
            {
                if(freq%2==1)
                    return {};
                else
                    for(int i = 0;i<freq/2; i++)
                        ans.push_back(num);
                continue;
            }
            
            if(num&1) return {}; 
            
            if(mp[num/2]==0 || mp[num/2]<freq) 
                return {}; 
            
            for(int i = 0;i<freq; i++)
                ans.push_back(num/2);
            
            (*m).second = 0, mp[num/2]-=freq;
            if(mp[num/2]==0) mp.erase(num/2);
        }
        
        return ans;
        
    }
};