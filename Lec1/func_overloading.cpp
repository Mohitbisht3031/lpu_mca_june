#include<bits/stdc++.h>
using namespace std;

// 1. same name and diffrent no. of params
// 2. same name and diff. data types
// or both


int max(int a,int b){
    return (a > b ? a : b);
    // if(a > b)return a;
    // else return b;
}

int max(int a,int b,int c){
    if(a>b){
        if(a > c)return a;
        return c;
    }
    if(b>c)return b;
    return c;
}

int max(int a,int b,int c,int d){
    return max(max(a,b),max(c,d));
}

int main(){

    cout<<max(5,25)<<endl;
    cout<<max(2,5,10)<<endl;
    cout<<max(5,10,25,50)<<endl;
    return 0;
}
