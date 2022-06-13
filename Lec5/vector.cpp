#include<bits/stdc++.h>
// #include<string>
 using namespace std;

 int main(){
    vector<int>v(5);
    // vector<char>v2;
    // vector<string>s3;
    // v.push_back(5);
    // v.push_back(10);
    // v.push_back(15);
    // v.push_back(20);
    v[0] = 5;
    v[1] = 10;
    v[2] = 15;
    v[3]= 20;
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    for(int i = 0;i<5;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<v.size()<<"->";
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i = 0;i<3;i++){
        v.pop_back();
    }
    cout<<v.size()<<endl;
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


    return 0;
 }