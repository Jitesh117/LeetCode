class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0, n = haystack.size(), m = needle.size();
        if (m == 0) 
            return 0;
        
        while (i + m - 1 < n) {
            
            if (haystack.substr(i, m) == needle)
                return i;
            
           i++;
        }
        
        return -1;
    }
};