class MinStack {
public:
    stack<int> s;
    stack<int> p;
    MinStack() {
    }
    
    void push(int value) {
        s.push(value);
        if(p.empty() || value <= p.top()){
            p.push(value);
        }
    }
    
    void pop() {
        if(s.top() == p.top()){
            p.pop();
        }
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return p.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */