class MyQueue {
public:
    stack<int>s1,s2;
    MyQueue() {
        
    }
    
    void push(int x) {
       if(s2.empty())
           s2.push(x);
        else{
            while(s2.size()){
                s1.push(s2.top());
                s2.pop();
            }
            s2.push(x);
            while(s1.size()){
                s2.push(s1.top());
                s1.pop();
            }
        }
    }
    
    int pop() {
        if(s2.empty()) return -1;
        int temp = s2.top();
        s2.pop();
        return temp;
    }
    
    int peek() {
       if(s2.empty()) return -1;
        return s2.top();
    }
    
    bool empty() {
       return s2.empty(); 
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */