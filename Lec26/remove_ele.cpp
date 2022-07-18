#include<bits/stdc++.h>

using namespace std;

int remove_ele(vector<int>&v){
    if(v.size() == 1)return v[0];

    while(v.size() > 1){
        vector<int>vec;
        for(int i = 0;i<v.size();i+=2){
            vec.push_back(v[i]);
        }

        v.clear();
        for(int i = 0;i<vec.size();i++)v.push_back(vec[i]);
    }

    return v[0];
    // vector<int>vec;
    // for(int i=0;i<v.size();i+=2){
    //     vec.push_back(v[i]);
    // }

    // return remove_ele(vec);
}

int main(){

    vector<int>v;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }

    cout<<remove_ele(v)<<endl;

    return 0;
}
