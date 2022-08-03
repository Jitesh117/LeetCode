class MinStack {
public:
    priority_queue<int,vector<int>,greater<int>>pq;
    stack<int>st;
    MinStack() {
        
    }
    
    void push(int val) {
       st.push(val);
        if(pq.empty() or val<=pq.top())
            pq.push(val);
    }
    
    void pop() {
        if(st.top() == pq.top())
            pq.pop();
        st.pop();
    }
    
    int top() {
       return st.top(); 
    }
    
    int getMin() {
       return pq.top(); 
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */