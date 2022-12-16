class MyQueue {
public:
    stack<int> in;
    stack<int> out;
    int ele = -1;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(in.empty()){
            ele = x;
        }
        in.push(x);
    }
    
    int pop() {
        if(out.empty()){
            while(!in.empty()){
                out.push(in.top());
                in.pop();
            }
        }
        int value = out.top();
        out.pop();
        return value;
    }
    
    int peek() {
        if(out.empty())
        return ele;

        return out.top();
    }
    
    bool empty() {
        if(in.empty() && out.empty())
        return true;

        return false;
    }
};
