class Solution {
public:
    string reverseOnlyLetters(string s) {
       int beg = 0,end = s.size()-1;
        while(beg<end)
        {
            while(beg<end and !isalpha(s[beg]))
                beg++;
            while(beg<end and !isalpha(s[end]))
                end--;
            swap(s[beg++],s[end--]);
        }
        return s;
    }
};