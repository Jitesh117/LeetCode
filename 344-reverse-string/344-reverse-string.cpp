class Solution {
public:
    void reverseString(vector<char>& s) {
       int beg = 0, last = s.size()-1;
        while(beg<last)
        {
            char temp = s[beg];
            s[beg] = s[last];
            s[last] = temp;
            beg++;
            last--;
        }
    }
};