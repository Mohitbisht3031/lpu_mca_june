#include<bits/stdc++.h>
// #include<string>
 using namespace std;

class student{
    int age;
    int year;
    string course;
    public:
    string name;

    void intro(){
        cout<<"hey.! my name is "<<name<<endl;;
    }

    void init(string n = "x",int a = 25, int y = 1,string c = "MCA"){
        name = n;
        age = a;
        year = y;
        course = c;
    }

    friend void bestFriend(student s);
    friend class admin;
};

class admin{
    public:

    void info(student s){
        cout<<"student's name is "<<s.name<<" his/her age is "<<s.age<<" he/she is in "<<s.year<<" year."<<endl;
    }

};

void bestFriend(student s){
    cout<<s.name<<" "<<s.age<<" "<<s.year<<" "<<s.course<<endl;
}

 int main(){
     student s1;
     s1.init("Ajay",21);
     admin a1;
    //  a1.info(s1);
    bestFriend(s1);
    //  cout<<s1.age<<endl;
    return 0;
 }