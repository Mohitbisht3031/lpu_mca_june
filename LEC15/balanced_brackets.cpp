#include<bits/stdc++.h>

using namespace std;

bool check(string str){
    if((str.size())%2 != 0)return 0; 

    stack<char>stk;

    for(int i = 0;i<str.size();i++){
        if(str[i] == '(')stk.push(str[i]);
        else{
            if(!stk.empty()){
                if(stk.top() == '(')stk.pop();
            }else return 0;
        }
    }


    return stk.empty();
}


int main(){

    string s;
    cin>>s;

    if(check(s)){
        cout<<"Balanced string"<<endl;
    }else cout<<"unbalanced string.!"<<endl;

    return 0;
}

