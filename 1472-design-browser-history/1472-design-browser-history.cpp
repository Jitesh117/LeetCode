class BrowserHistory {
public:
    stack<string> after;
    stack<string> before;
    BrowserHistory(string homepage) {
       before.push(homepage);
        after = stack<string>();
        
    }
    
    void visit(string url) {
       after = stack<string>();
       before.push(url); 
    }
    
    string back(int steps) {
       while(steps and before.size()>1){
           after.push(before.top());
           before.pop();
           steps--;
       } 
        return before.top();
    }
    
    string forward(int steps) {
       while(steps and after.size()>0){
           before.push(after.top());
           after.pop();
           steps--;
       } 
        return before.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */