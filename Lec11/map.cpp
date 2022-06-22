#include<bits/stdc++.h>
using namespace std;

int main(){
    map<char,int>mp;
    // unordered_map<char,int>mp1;
    // cout<<mp.size()<<endl;
    // mp['M'] = 1;
    // mp['o'] = 1;

    // mp.erase('M');
    string str = "mohit";

    for(int i = 0;i<str.size();i++){
        mp[str[i]]++;
    }

    // mp['M'] = 2;

    return 0;
}