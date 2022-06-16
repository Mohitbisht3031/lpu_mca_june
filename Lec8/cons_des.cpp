#include<bits/stdc++.h>
using namespace std;

class A{
    int a;
    protected:
    int b;
    public:
    int c;

    A(){
        cout<<"A's cons called.!"<<endl;
    }

    ~A(){
        cout<<"A's Des is called.!"<<endl;
    }

};

class B: public A{
    public:

    B(){
        cout<<"B's Cons called.!"<<endl;
    }
    ~B(){
        cout<<"B's des. called.!"<<endl;
    }
};

int main(){
    B obj;
    return 0;
 }