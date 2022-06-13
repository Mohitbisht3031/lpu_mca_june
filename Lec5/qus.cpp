#include<bits/stdc++.h>
// #include<string>
 using namespace std;

int x = 25;
class student{
    public:
    string name;
    int age;
    student(){
        cout<<"C is called"<<endl;
    }
    ~student(){
        x = 50;
        cout<<"D is called"<<endl;
    }
};

int func(){
    student s1;
    return x;
}

 int main(){
    cout<<func()<<endl;
    return 0;
 }