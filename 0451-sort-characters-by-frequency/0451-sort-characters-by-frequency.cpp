class Solution
{
public:
   
    string frequencySort(string s)
    {
        unordered_map<char, int> hash;
        for (auto it : s)
        {
            hash[it]++;
        }

        vector<pair<int, char>> temp;
        for (auto it : hash)
            temp.push_back({it.second, it.first});

        sort(temp.begin(), temp.end(), smaller);
        string result;
        for (auto it : temp)
        {
            int count = it.first;
            while (count--)
                result+= it.second;
        }
        return result;
    }
     static bool smaller(pair<int, char> a, pair<int, char> b)
    {
        return a.first > b.first;
    }
};