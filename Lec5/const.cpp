#include<bits/stdc++.h>
// #include<string>
 using namespace std;

class student{
    public:
    string name;
    int age;
    int year;
    string course;

    void intro(){
        cout<<"hey.! my name is "<<name;
        cout<<" ,my age is"<<age;
        cout<<" i'm in "<<year<<" year";
        cout<<" My course is "<<course<<endl;
    }

    student(){
        cout<<"Default const is called"<<endl;
    }

    student(string n,int a, int y,string c){
        cout<<"Const. with params is called"<<endl;
        name = n;
        age = a;
        year = y;
        course = c;
    }

};

 int main(){
    student s1;
    student s2("Manish", 22 , 1 ,"MCA");
    student s3 = s2;
    s3.intro();
    // s1.init("Ajay",21,1,"MCA");
    // s1.intro();
    return 0;
 }