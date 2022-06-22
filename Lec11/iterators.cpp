#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> planets = {"mercury","venus","earth","mars","jupitor","saturn","uranus","neptune"};

    vector<string>::iterator manish = planets.begin();  
    vector<string>::iterator anchal = planets.begin();  

    // cout<<*manish<<endl;
    // cout<<*anchal<<endl;

    // cout<<*(anchal+3)<<endl;
    // advance(anchal,2);
    // cout<<*anchal<<endl;
    // advance(anchal,-1);
    // cout<<*anchal<<endl;
    // cout<<distance(manish,anchal)<<endl;

    next(anchal,3);
    cout<<*anchal<<endl;
    anchal = next(anchal,3);
    cout<<*anchal<<endl;
    return 0;
}