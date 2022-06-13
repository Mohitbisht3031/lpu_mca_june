#include<bits/stdc++.h>
// #include<string>
 using namespace std;

class student{
    public:
    string name;
    int age;

    // student(string name,int age){
    //     this->name = name;
    //     this->age = age;
    // }
    student(string name,int age):name(name),age(age)
    {}
};

 int main(){
    student s1("Manish",22);

    student* ptrs = &s1;
    cout<<s1.name<<endl;
    cout<<(*ptrs).age<<endl;
    cout<<ptrs->name<<" "<<ptrs->age<<endl;
    // int x = 10;
    // int*ptri = &x;
    // if(sizeof(ptrs) == sizeof(ptri)){
    //     cout<<"same"<<endl;
    // }else cout<<"Not same"<<endl;

    return 0;
 }