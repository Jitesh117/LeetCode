class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string one,two;
        for(auto c:s){
            if(c == '#' and !one.empty())
                one.pop_back();
            else if(c != '#')
                one.push_back(c);
        }
        for(auto c:t){
            if(c == '#' and !two.empty())
                two.pop_back();
            else if(c != '#')
                two.push_back(c);
        }
        return one == two;
    }
};