#include<bits/stdc++.h>
 using namespace std;

// h:mm

class Time{
    public:
    int h;
    int m;
    // methord 1
    Time(int mins = 0){
        h = mins/60;
        m = mins%60;
    }

    void operator =(int mins){
        h = mins/60;
        m = mins%60;
    }

    void display(){
        cout<<h<<" hours & "<<m<<" mins.!"<<endl;
    }

};

int main(){
    int mins_from_midnight = 330;
    Time t;
    t = mins_from_midnight;
    // Time t = mins_from_midnight;
    // Time t2(mins_from_midnight);
    // t.display();
    // =
    return 0;
 }