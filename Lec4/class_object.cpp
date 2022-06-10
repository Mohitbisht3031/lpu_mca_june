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

    void init(string n = "x",int a = 25, int y = 1,string c = "MCA"){
        name = n;
        age = a;
        year = y;
        course = c;
    }

};

 int main(){
    student s1;
    s1.init("Ajay",21,1,"MCA");
    s1.intro();
    return 0;
 }