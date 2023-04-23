class Solution {
public:
    vector<int> successfulPairs(vector<int>& s, vector<int>& p, long long suc){
        vector<int> v(s.size(),0);
        sort(p.begin(),p.end());
        
        for(int i=0;i<s.size();i++)
        {
            int end=p.size()-1;
            int beg=0;
            int mid;
            while(beg<=end)
            {
                mid = beg + (end-beg)/2;
                
                if((long long int)s[i]*(long long int)p[mid] >= suc)
                    end = mid-1;
                
                else
                    beg = mid+1;
            }
            
            v[i] = p.size()-1-end;
        }
        
        return v;
    }
};