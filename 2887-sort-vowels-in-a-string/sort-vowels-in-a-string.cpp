class Solution {
public:
    string sortVowels(string s) {
        vector<char> v;
        unordered_map<int,int> pos;
        for(int i = 0;i < s.size(); i++){
            if(vowel(s[i])){
                 v.push_back(s[i]);
                pos[i]++;
            }
        }
        sort(v.begin(), v.end());
        int j = 0;
        for(int i = 0; i< s.size(); i++){
            if(pos[i]) s[i] = v[j++];
        }
        return s;

    }
    bool vowel(char x)
    {
    if (x == 'a' || x == 'e' || x == 'i' || 
        x == 'o' || x == 'u' || x == 'A' || 
        x == 'E' || x == 'I' || x == 'O' || x == 'U')
       return true;
        return false;
}
};