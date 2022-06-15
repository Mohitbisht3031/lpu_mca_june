#include<bits/stdc++.h>
 using namespace std;

// h:mm

class Height{
    public:
    int feet;
    int inches;

    Height(int feet,int inches){
        this->feet = feet;
        this->inches = inches;
    }

    double convert(){
        return ((feet*12)+inches)*2.57;
    }

    void display(){
        cout<<"Hey I'm "<<feet<<" feet ans "<<inches<<" inches tall.!"<<endl;
    }

    operator double(){
        return ((feet*12)+inches)*2.57;
    }

};

int main(){
    Height h(5,8);
    h.display();
    // centinmeter.!
    // cout<<h.convert()<<endl;

    double cnt = (double)h;
    cout<<cnt<<endl;
    return 0;
 }