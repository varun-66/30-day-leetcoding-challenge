class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> st;
    stack<int> minst;
    
    MinStack() {
        while(!st.empty()) st.pop();
        while(!minst.empty()) minst.pop();
    }
    
    void push(int x) {
        this->st.push(x);
        if( (!minst.empty() && x<=this->minst.top()) || (minst.empty()) ) this->minst.push(x);
        stack<int> s=minst;
        while(!s.empty()) {
            cout<<s.top()<<" ";
            s.pop();
        }
        cout<<endl;
    }
    
    void pop() {
        if(!st.empty() && !minst.empty() && this->st.top()==this->minst.top()) {
            this->st.pop();
            this->minst.pop();
        }
        else {
            if(!st.empty()) this->st.pop();
        }
    }
    
    int top() {
        if(!st.empty()) return this->st.top();
        return 0;
    }
    
    int getMin() {
        if(!minst.empty()) return this->minst.top();
        return 0;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
