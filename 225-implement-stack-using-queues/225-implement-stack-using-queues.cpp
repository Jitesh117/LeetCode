class MyStack {
public:
    queue<int> q,temp;
    MyStack() {
        
    }
    
    void push(int x) {
        temp.push(x);
        while(!q.empty())
        {
            temp.push(q.front());
            q.pop();
        }
        swap(temp,q);
    }
    
    int pop() {
        int result = top();
        q.pop();
        return result;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */