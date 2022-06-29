#include<bits/stdc++.h>

using namespace std;

bool check(string str){

    stack<char>stk;
    for(int i = 0;i<str.size();i++){
        if(str[i] == '(' || str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/'){
            stk.push(str[i]);
        }else if(str[i] == ')'){

            bool f = 0;
            while(!stk.empty() && stk.top() != '('){
                f = 1;
                stk.pop();
            }
            if(f){
                stk.pop();
            }else return 1;
        }
    }

    return (stk.empty() ? 0 : 1);
}


int main(){

    string s;
    cin>>s;

    if(check(s)){
        cout<<"redundency is present string"<<endl;
    }else cout<<"redundency is not present string.!"<<endl;

    return 0;
}

