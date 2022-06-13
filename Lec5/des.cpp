#include<bits/stdc++.h>
// #include<string>
 using namespace std;

class student{
    public:
    string name;
    int age;
    student(){
        cout<<"C is called"<<endl;
    }
    ~student(){
        cout<<"D is called"<<endl;
    }
};

void func(){
    cout<<"f start"<<endl;
    student s1;
    cout<<"f ends"<<endl;
    return;
}

 int main(){
    cout<<"Program starts"<<endl;
    func();
    cout<<"program ends"<<endl;
    return 0;
 }