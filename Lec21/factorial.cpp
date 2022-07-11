#include<bits/stdc++.h>

using namespace std;

// bottom up approach or bottom up dp || tabular form
int fact(int n){
    if(n <= 1)return 1;

    vector<int>dp(n+1);
    dp[0] = 1;
    dp[1] = 1;

    for(int i = 2;i<=n;i++){
        dp[i] = i*dp[i-1];
    }

    return dp[n];
}

int main(){
    return 0;
}
