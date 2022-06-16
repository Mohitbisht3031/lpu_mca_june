#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    void speak(){
        cout<<"Animal speaking.!"<<endl;
    }
};

class Dog : public Animal{
    public:
    void speak(){
        cout<<"Woof woof"<<endl;
    }
};

class Cat : public Animal{
    public:
    void speak(){
        cout<<"meaow meaowww"<<endl;
    }
};


int main(){
    Dog d;
    d.speak();
    d.Animal::speak();
    return 0;
 }