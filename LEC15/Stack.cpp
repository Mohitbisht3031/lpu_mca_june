#include<bits/stdc++.h>

using namespace std;

class LNode{
    public:
    int data;
    LNode*next;

    LNode(int d){
        data = d;
        next = NULL;
    }
};

class Stack{
    public:

    LNode*head;
    int cap;
    Stack(){
        cap = 0;
        head = NULL;
    }

    int size(){
        return this->cap;
    }

    bool empty(){
        return cap == 0;
    }

    void push(int d){
        LNode*n = new LNode(d);
        if(head == NULL){
            head = n;
        }else{
            n->next = head;
            head = n;
        }
        cap++;
        return;
    }

    int pop(){
        if(!head){
            cout<<"stack is already empty.!"<<endl;
            return -1;}
        int d = head->data;
        LNode*n = head->next;

        delete head;
        head = n;
        return d;
    }

    int top(){
        // if(!head){
        //     cout<<"Stack is empty.!"<<endl;
        //     return -1;
        // }

        return (head == NULL ? -1 : head->data);

        // return head->data;
    }

};

int main(){

    Stack s1;
    
    if(s1.empty())cout<<"stack is empty.!"<<endl;
    else cout<<"stack is not empty.!"<<endl;
    
    s1.push(10);
    s1.push(20);
    s1.push(30);

    cout<<s1.pop()<<endl;

    cout<<s1.top()<<endl;
    s1.push(50);

    cout<<s1.top()<<endl;

    if(s1.empty())cout<<"stack is empty.!"<<endl;
    else cout<<"stack is not empty.!"<<endl;


    return 0;
}

