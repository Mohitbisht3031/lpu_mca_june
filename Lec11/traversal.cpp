#include<bits/stdc++.h>
using namespace std;

int main(){
    // list<int>l;

    // l.push_back(10);
    // l.push_back(20);
    // l.push_front(30);

    // // l.pop_back();
    // // l.pop_front();
    // for(list<int>::iterator it = l.begin();it != l.end();it++){
    //     cout<<*it<<" ";
    // }
    // cout<<endl;

    // l.sort();

    // for(list<int>::iterator it = l.begin();it != l.end();it++){
    //     cout<<*it<<" ";
    // }
    // cout<<endl;

    // if(is_sorted(l.begin(),l.end()))cout<<"it is sorted"<<endl;

    vector<int>v = {5,10,215,23,55,2,6,42};

    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end());

    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


    // string str = "mohitmoh";
    // map<char,int>mp;
    // for(int i = 0;i<str.size();i++){
    //     mp[str[i]]++;
    // }

    // for(map<char,int>::iterator it= mp.begin();it != mp.end();it++){
    //     cout<<it->first<<"->"<<it->second<<endl;
    // }

    return 0;
}