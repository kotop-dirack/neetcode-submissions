class MinStack {
private:
    stack<int>st;
    stack<int>minx;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if (minx.empty()) {minx.push(val);}
        else {
        val = min(val,minx.top());
        minx.push(val);
        }
    }
    
    void pop() {
        st.pop();
        minx.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minx.top();
    }
};
