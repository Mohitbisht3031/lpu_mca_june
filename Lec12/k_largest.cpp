#include<bits/stdc++.h>
using namespace std;


int kthLargest(vector<int>&v,int k){
    sort(v.begin(),v.end());

    return v[v.size()-k];
}

int main(){
    vector<int>v = {5,10,1,2,100,111};

    int k = 3;
    cout<<kthLargest(v,k)<<endl;

    return 0;
}