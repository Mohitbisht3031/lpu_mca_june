#include<bits/stdc++.h>
using namespace std;


template<class T1,class T2>
class Cal{
    public:
    T1 x;
    T2 y;

    Cal(int x,int y){
        this->x = x;
        this->y = y;
    }

    T1 add(){
        return x+y;
    }

    T2 minus(){
        return x-y;
    }

};

int main(){
    Cal<int,int> c(20,25);
    Cal<double,int> c1(20.25,25);
    Cal<double,float> c1(20.25,25.2);


    cout<<c.add()<<endl;
    cout<<c.minus()<<endl;
    return 0;
}