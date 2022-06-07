#include<bits/stdc++.h>
using namespace std;

/*
1. base case
2. recursive call
3. small cal.
*/

// int power(int a,int b){
//     int prod = 1;
//     for(int i = 1;i<=b;i++){
//         prod*=a;
//     }
//     return prod;
// }

int power(int a,int b){
    if(b == 1)return a;
    if(a == 0)return a;
    int ans = power(a,b-1);
    ans*=a;
    return ans;
}

int main(){
    int a,b;
    cin>>a>>b;
    // cout<<pow(a,b)<<endl;
    cout<<power(a,b)<<endl;
    return 0;
}
