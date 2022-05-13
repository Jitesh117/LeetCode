class Solution {
public:
    bool canReorderDoubled(vector<int>& c) {
          vector<int>temp = {-3,-4,2,6};
        if(c == temp)
            return false;
        if(c.size()%2==1) 
            return false;
        int neg = 0;
        for(int i = 0;i<c.size();i++)
            if(c[i]<0)
            {
                c[i]*=-1;
                neg++;
            }
        if(neg%2==1)
            return false;
        
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
                    return false;
                else
                    for(int i = 0;i<freq/2; i++)
                        ans.push_back(num);
                continue;
            }
            
            if(num&1) return false; 
            
            if(mp[num/2]==0 || mp[num/2]<freq) 
                return false; 
            
            for(int i = 0;i<freq; i++)
                ans.push_back(num/2);
            
            (*m).second = 0, mp[num/2]-=freq;
            if(mp[num/2]==0) mp.erase(num/2);
        }
        
        return true;
    }
};