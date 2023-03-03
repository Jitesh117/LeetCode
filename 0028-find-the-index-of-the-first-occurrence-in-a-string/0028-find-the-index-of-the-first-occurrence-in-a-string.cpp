class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.size();
        int h = haystack.size();
        if(n == 0) return 0;
        int i = 0;
        while(i<h-n+1){
            if(haystack.substr(i,n) == needle)
                return i;
            i++;
        }
        return -1; 
    }
};