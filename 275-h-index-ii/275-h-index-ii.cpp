class Solution {
public:
    int hIndex(vector<int>& c) {
        int n = c.size(),result = 0;
        int beg = 0,end = n-1;
        while(beg<=end)
        {
            int mid = beg + (end-beg)/2;
            if(c[mid]>=n-mid)
                end = mid-1;
            else
                beg = mid+1;
        }
        return n-beg;
    }
};