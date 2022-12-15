class Solution {
public:
    string getHint(string secret, string guess) {
        int cows = 0;
        int bulls = 0;
        vector<int> s(10, 0);
        vector<int> g(10, 0);
        if (secret.size() != guess.size())
            return "0A0B";
        for (int i = 0; i < secret.size(); ++i) {
            if (secret[i] == guess[i]) {
                ++cows; 
            } else {
                ++s[secret[i]-'0'];
                ++g[guess[i]-'0'];
            }
        }
        for (int i = 0; i < s.size(); ++i) {
            bulls+= min(s[i], g[i]);
        }
        return to_string(cows) + 'A' + to_string(bulls) + 'B';
    }
};