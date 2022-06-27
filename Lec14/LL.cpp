#include<bits/stdc++.h>

using namespace std;

class LN{
    public:
    int data;
    LN*next;

    LN(int d){
        data = d;
        next = NULL;
    }
};

LN* makeLL(){
    int d;
    LN*head = NULL;
    LN*tail = NULL;
    cin>>d;

    while(d != -1){
        LN*node = new LN(d);

        if(head == NULL){
            head = node;
            tail = node;
        }else{
            tail->next = node;
            tail = node;
        }

        cout<<"enter next node's val: "<<endl;
        cin>>d;
    }

    return head;
}

// print using itration
/*void printll(LN* head){
    if(!head)return;

    LN*temp = head;
    while(temp){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULLPTR"<<endl;
    return;
}*/

// printll using recursion
// 1. Base case
// 2. Samll cal. 
// 3. recursive call.
void printll(LN* head){
    // base case
    if(!head){
        cout<<"NULLPTR"<<endl;
        return;
    }
    // our job or small cal. part
    cout<<head->data<<"->";
    // recursive call
    printll(head->next);
    return;
}

// iterative length func
/*int length(LN*head){
    if(!head)return 0;

    LN*temp = head;
    int l = 0;
    while(temp){
        l++;
        temp = temp->next;
    }

    return l;
}*/

// recursive length func
int length(LN*head){
    if(!head)return 0;
    
    // int smlans = length(head->next);

    // return smlans+1;
    return length(head->next)+1;
}

// iterative reverse
/*LN* reverse(LN* head){
    if(!head)return head;

    LN*prev = NULL;
    LN*t = head;
    while(t){
        LN*n = t->next;
        t->next = prev;
        prev = t;
        t = n;
    }

    return prev;
}*/

// recursive reverse
LN* reverse(LN* head){
    if(!head || !head->next)return head;

    LN* nh = reverse(head->next);
    LN*n = head->next;
    n->next = head;
    head ->next = NULL;
    return nh;
}

int main(){

    LN* head = makeLL();

    printll(head);

    cout<<"length of LL is : "<<length(head)<<endl;

    LN* nhead = reverse(head);
    printll(nhead);

    return 0;
}

