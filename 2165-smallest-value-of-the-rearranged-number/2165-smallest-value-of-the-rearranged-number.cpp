class Solution {
public:
    long long smallestNumber(long long num) {
        string snum = to_string(num);
        if(num>=0)
        {
            sort(snum.begin(),snum.end());
            int nzpos = 0;
            for(int i = 0;i<snum.size();i++){
                if(snum[i] != '0') {
                   nzpos = i; 
                    break;
                }
            }
            swap(snum[nzpos],snum[0]);
            long long result = stoll(snum);
            return result;
        }
        sort(snum.rbegin(),snum.rend());
        snum.pop_back();
        long long result = stoll(snum);
        return -result;
        
    }
};