class Solution
{
public:
    int numSplits(string s)
    {
        int result = 0;
        unordered_set<char> one, two;
        vector<int> prefix(s.size(), -1);
        vector<int> suffix(s.size(), -1);

        for (int i = 0; i < s.size() - 1; i++){
            one.insert(s[i]);
            prefix[i] = one.size();
        }

        for (int i = s.size() - 1; i > 0; i--){
            two.insert(s[i]);
            suffix[i] = two.size();
        }

        for (int i = 0; i < s.size() - 1; i++){
            if (prefix[i] == suffix[i + 1])
                result++;
        }

        return result;
    }
};