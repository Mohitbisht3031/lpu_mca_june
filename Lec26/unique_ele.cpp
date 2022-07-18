#include<bits/stdc++.h>

using namespace std;

// brute force approach TC: O(n^2)
/*int unique_element(vector<int>&arr){
    int ans = -1;

    for(int i= 0;i<arr.size();i++){
        
        bool f = 0;
        for(int j = 0;j<arr.size();j++){
            if(i != j && arr[i] == arr[j]){
                f = 1;
                break;
            }
        }
        if(!f){
            ans = arr[i];
            break;
        }
    }

    return ans;
}*/

// Tc: O(n) && Sc: O(n)
/*int unique_element(vector<int>&arr){
    unordered_map<int,int>mp;

    for(auto e:arr){
        mp[e]++;
    }

    for(auto m:mp){
        if(m.second == 1)return m.first;
    }

    return -1;
}*/

// Tc: O(n) && SC : O(1)
int unique_element(vector<int>&arr){

    int ans = arr[0];
    for(int i = 1;i<arr.size();i++){
        ans = ans^arr[i];
    }

    return ans;
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

    return 0;
}
