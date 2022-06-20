#include<bits/stdc++.h>
using namespace std;

template <class T>
T func(vector<T>&v, T def = 0){

    T sum = def;
    for(int i = 0;i<v.size();i++){
        sum+=v[i];
    }
    return sum;
}

// double func(vector<double>&v){
//     double sum = 0;
//     for(int i = 0;i<v.size();i++){
//         sum+=v[i];
//     }
//     return sum;
// }

int main(){
    vector<int>v = {1,2,3,4,5,6};
    vector<double>v1 = {1.2,2.3,3.4,4.5,5.6,6.7};
    vector<string>v2 = {"Hey"," it's"," magic.!"};
    cout<<func<int>(v)<<endl;
    // cout<<func<double>(v1)<<endl;

    cout<<func<string>(v2,"")<<endl;

    return 0;
}