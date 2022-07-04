#include<bits/stdc++.h>
using namespace std;

vector<int>prevSmaller(vector<int> &A) {
    vector<int>ans(A.size());
    ans[0] = -1;
    
    stack<int>stk;
    stk.push(0);
    
    /*
    
    for(int i = 1;i<A.size();i++){
        for(int j = i-1;j>=0;j--){
            if(A[j] < A[i]){
                ans[i] = j;
                break;
            }
        }
    }
    
    */
    
    for(int i = 1;i<A.size();i++){
        
        while(!stk.empty() && A[stk.top()] > A[i])stk.pop();
        
        if(stk.empty())ans[i] = -1;
        else ans[i] = stk.top();
        
        stk.push(i);
    }
    
    return ans;
}






































// vector<int> Solution::prevSmaller(vector<int> &A) {
//     stack<int>s;
//     vector<int>v(A.size());
//     if(A.size() == 0)return v;
//     // s.push(A[0]);

//     for(int i = 0;i<A.size();i++){
//         if(i == 0){
//             s.push(A[i]);
//             v[i] = -1;
//         }else{
//             while(!s.empty() && s.top() >= A[i]){
//                 s.pop();
//             }
//             if(s.empty()){
//                 s.push(A[i]);
//                 v[i] = -1;
//                 // s.push(v[i]);
//             }else{
//                 v[i] = s.top();
//                 s.push(A[i]);
//             }
//         }
//     }
//     return v;
// }


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