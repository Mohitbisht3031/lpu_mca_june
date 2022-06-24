#include<bits/stdc++.h>
using namespace std;

int qsHelper(vector<int>&v,int s,int e){
    if(s >=e)return 0;
    int c = 0;
    cout<<"in helper"<<endl;
    for(int i = s+1;i<=e;i++){
        if(v[s] > v[i])c++;
    }

    swap(v[s],v[s+c]);

    int i = s;
    int j = e;

    while(i <= c+s && j >= c+s){
        if(v[i] >= v[c+s] && v[j] < v[s+c]){
            swap(v[i],v[j]);
            i++;
            j--;
        }else if(v[j] >= v[c+s])j--;
        else i++;
    }

    return c+s;
}

void qs(vector<int>&v,int s,int e){
    if(s >= e)return ;
    cout<<"in the qs"<<endl;
    int ans = qsHelper(v,s,e);
    qs(v,s,ans-1);
    qs(v,ans+1,e);

    return;
}

int main(){
    vector<int>v = {8,5,11,1,22};
    cout<<"qs called"<<endl;
    qs(v,0,v.size()-1);
    cout<<"qs ended"<<endl;

    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}