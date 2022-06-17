#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    student(){
        cout<<"cons"<<endl;
    }

    ~student(){
        cout<<"des"<<endl;
    }
};

void func(){
    cout<<"in func"<<endl;
    student*s=  new student;
    delete s;
    cout<<"ending func"<<endl;
    return;
}

int main(){
    // func();
    // int*arr = new int[5];
    // delete[] arr;
    student*arr = new student[5];
    delete[] arr;
    return 0;
}