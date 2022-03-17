class Solution {
public:
    int countGoodSubstrings(string s) {
      
        int count = 0;
        char f=s[0],sec = s[1],t=s[2];
        for(int i = 3;i<s.size();i++)
        {
            if(f!=sec && f!=t && t!=sec)
                count++;
            f = sec;
            sec = t;
            t = s[i];
        }
         if(f!=sec && f!=t && t!=sec)
                count++;
        return count;
    }
};