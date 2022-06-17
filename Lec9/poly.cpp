#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    virtual void speak() = 0;
};

class Dog : public Animal{
    public:
    void speak(){
        cout<<"woof woofff.!!"<<endl;
    }
};


int main(){
    Dog d;
    // Animal a;

    // Animal*ptr = new Dog; //dynamic memory 
    // ptr->speak();
    // Dog d;
    // a.speak();
    // d.speak();
    return 0;
}