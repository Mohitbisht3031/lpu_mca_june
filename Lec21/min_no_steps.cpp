#include<bits/stdc++.h>

using namespace std;

int min_step(int n,vector<int>&dp){
    if(n == 1)return 0;

    if(dp[n] != -1)return dp[n];

    int a = min_step(n-1,dp);
    int b = 99999;
    int c = 99999;

    if(n%2 == 0){
        b = min_step(n/2,dp);
    }
    if(n%3 == 0){
        c = min_step(n/3,dp);
    }

    return dp[n] = min(a,min(b,c))+1;
}

int minstep(int n){
    if(n == 1)return 0;

    vector<int>dp(n+1,-1);
    return min_step(n,dp);
}


int main(){
    return 0;
}
