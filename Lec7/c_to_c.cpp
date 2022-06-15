#include<bits/stdc++.h>
using namespace std;

class matric{
    public:
    int kms;
    int mts;

    matric(int k,int m){
        kms = k;
        mts = m;
    }

    void display(){
        cout<<kms<<" kms & "<<mts<<" meters "<<endl;
    }

};

class Imperial{
    public:
    int miles;
    int foots;

    Imperial(matric m){
        miles = m.kms/1.6;
        foots = m.mts/0.3;
    }

    void display(){
        cout<<miles<<" miles & "<<foots<<" foots.!"<<endl;
    }

};



int main(){
    matric m(5,10);
    Imperial i = m;
    Imperial i2(m);
    i.display();
    i2.display();

    return 0;
 }