#include<bits/stdc++.h>
using namespace std;

class A{
    int a;
    protected:
    int b;
    public:
    int c;
};

class B: public A{
    // protected:
    // int b;
    // public:
    // int c;
    
    public:

    B(){
        // cout<<a<<b<<c<<endl;
    }

};

int main(){
    A a;
    B b;
    // cout<<b.b<<b.c<<endl;

    return 0;
 }