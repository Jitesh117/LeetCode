class MyQueue {
public:
    stack<int> st1;
stack<int> st2;
MyQueue() {
    
}

void push(int x) {
    if(st2.empty())
        st2.push(x);
    else {
        vector<int> v;
        while(!st2.empty()) {
            st1.push(st2.top());
            st2.pop();
        }
        st2.push(x);
        while(!st1.empty()) {
            st2.push(st1.top());
            st1.pop();
        }
    }
}

int pop() {
    if(st2.empty())
        return -1;
    int x=st2.top();
    st2.pop();
    return x;
}

int peek() {
     if(st2.empty())
        return -1;
    return st2.top();
}

bool empty() {
    return st2.empty();
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