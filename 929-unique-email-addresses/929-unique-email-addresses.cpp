class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_map<string,int> hash;
    for(string &email : emails) {
        string mail;
        for(char c : email) {
            if(c == '+' || c == '@') break;
            if(c == '.') continue;
            mail += c;
        }
        mail += email.substr(email.find('@'));
        hash[mail]++;
    }
    return hash.size();
    }
};