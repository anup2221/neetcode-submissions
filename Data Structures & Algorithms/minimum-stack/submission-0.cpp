class MinStack {
public:
    stack<int> s;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty())
        {
            s.push(val);
            s.push(val);
        }
        else{
            int top=s.top();
            s.push(val);
            s.push(min(val,top));
        }
    }
    
    void pop() {
        s.pop();
        s.pop();
        
    }
    
    int top() {
        int minimum=s.top();
        s.pop();
        int val=s.top();
        s.push(minimum);
        return val;

        
    }
    
    int getMin() {
        return s.top();
        
    }
};
