#include<bits/stdc++.h>
 using namespace std;

int fact(int n){
    if(n <=1 )return 1;

    int ans = fact(n-1)*n;
    return ans;
}

 int main(){

     int n;
     cin>>n;
     cout<<fact(n)<<endl;
     return 0;
 }