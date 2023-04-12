class Solution {
public:
    string simplifyPath(string path) {
        stack<string> s;
        string result, temp;
        int n = path.size();
        stringstream X(path);
        
        while(getline(X, temp, '/')){
            if(temp == "" || temp == ".") continue;
            if(temp != ".." ) s.push(temp);
            else if(!s.empty()) s.pop();
        }
        if(s.empty()) return "/";
        
        while(!s.empty()){
            result = '/' + s.top() + result;
            s.pop();
        }
        return result;
    }
};