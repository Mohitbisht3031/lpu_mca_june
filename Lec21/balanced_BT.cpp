#include<bits/stdc++.h>

using namespace std;

int mod = 1e9+7;
int balanced_bt(int h){
    if(h <= 1)return h;

    int x = balanced_bt(h-1);
    int y = balanced_bt(h-2);

    int t1 = ((long)x*x)%mod;
    int t2 = ((long)x*y*2)%mod;

    return t1+t2;
}


int main(){
    return 0;
}
