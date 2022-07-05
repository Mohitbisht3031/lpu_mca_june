#include<bits/stdc++.h>

using namespace std;

class BTnode{
    public:
    int val;
    BTnode* leftC;
    BTnode* rightC;

    BTnode(int data){
        val = data;
        leftC = NULL;
        rightC = NULL;
    }

};

/*BTnode* makeBT(){
    int val;
    cin>>val;
    if(val == -1){
        return NULL;
    }

    BTnode*root= new BTnode(val);

    root->leftC = makeBT();
    root->rightC = makeBT();

    return root;
}*/

BTnode* makeBT(){
    int val;
    cin>>val;
    if(val == -1)return NULL;

    BTnode*root = new BTnode(val);
    queue<BTnode*>q;

    q.push(root);
    while(!q.empty()){

        BTnode*f = q.front();
        q.pop();
        cout<<"enter left child of : "<<f->val<<endl;
        cin>>val;
        if(val != -1){
            BTnode*lc = new BTnode(val);
            f->leftC = lc;
            q.push(lc);
        }
        cout<<"enter right child of : "<<f->val<<endl;
        cin>>val;
        if(val != -1){
            BTnode*rc = new BTnode(val);
            f->rightC = rc;
            q.push(rc);
        }
    }

    return root;
}

/*void printBT(BTnode*root){

    if(!root)return;

    cout<<root->val<<endl;
    printBT(root->leftC);
    printBT(root->rightC);
    return;
}*/

void printBT(BTnode*root){
    if(!root)return;

    queue<BTnode*>q;
    q.push(root);

    while(!q.empty()){
        int s = q.size();
        for(int i = 0;i<s;i++){
            BTnode*root = q.front();
            q.pop();
            cout<<root->val<<" ";
            if(root->leftC)q.push(root->leftC);
            if(root->rightC)q.push(root->rightC);
        }
        cout<<endl;
    }

    return;
}

void inorder(BTnode*root){

    if(!root)return;

    inorder(root->leftC);
    cout<<root->val<<endl;
    inorder(root->rightC);

    return;
}

void postorder(BTnode*root){

    if(!root)return;

    postorder(root->leftC);
    postorder(root->rightC);
    cout<<root->val<<endl;

    return;
}

int main(){

    BTnode*root = makeBT();
    printBT(root);

    return 0;
}

