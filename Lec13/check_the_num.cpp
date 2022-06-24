#include<bits/stdc++.h>
using namespace std;

// linear search.!
// TC: O(n) -> n = num. of elements in the arr.
/*bool check_the_val(vector<int>&v,int x){

    for(int i = 0;i<v.size();i++){
        if(v[i] == x)return 1;
    }

    return 0;
}*/

//using Binary search.!
bool check_the_val(vector<int>&v,int x){
    // int lo = 0;
    // int hi = v.size()-1;

    return binary_search(v.begin(),v.end(),x);

    // while(lo <= hi){
    //     int mid = lo+(hi-lo)/2;
    //     if(v[mid] == x)return 1;
    //     if(v[mid] > x){
    //         hi = mid-1;
    //     }else lo = mid+1;
    // }

    // return 0;
}

int main(){
    vector<int>v = {1,2,3,4,10,15,20,50};

    if(check_the_val(v,11)){
        cout<<"It is present.!"<<endl;
    }else cout<<"not present.!"<<endl;
    return 0;
}