#include<bits/stdc++.h>
using namespace std;


int missing_num(vector<int>&v,int n){
    int s = (n*(n+1)/2);

    for(int i = 0;i<v.size();i++){
        s-=v[i];
    }

    return s;
}

int main(){
    vector<int>v = {1,2,3,4};
    cout<<missing_num(v,5)<<endl;
    return 0;
}