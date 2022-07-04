#include<bits/stdc++.h>
using namespace std;

class MyStack {
public:
    
    queue<int>q1;
    // queue<int>q2;
    
    MyStack() {
        
    }
    
    void push(int x) {
        if(q1.empty())q1.push(x);
        
        q1.push(x);
        for(int i=0;i<q1.size()-1;i++){
            q1.push(q1.front());
            q1.pop();
        }
        
        return;
    }
    
    int pop() {
        if(q1.empty())return -1;
        
        // return q1.pop();
        int f = q1.front();
        q1.pop();
        return f;
    }
    
    int top() {
        if(q1.empty())return -1;
        
        return q1.front();
    }
    
    bool empty() {
        // return (q1.size() == 0);
        return q1.empty();
    }
};


int main(){
    return 0;
}

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */