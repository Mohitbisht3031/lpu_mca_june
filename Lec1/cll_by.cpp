#include<bits/stdc++.h>
using namespace std;

void inc_by_val(int a){
    a++;
    return;
}

void inc_by_add(int*a){
    // (*a)++;
    ++(*a);
    return ;
}

void inc_by_ref(int&a){
    a++;
    return;
}

int main(){
    int i = 10;
    // inc_by_val(i);
    // cout<<i<<endl;

    // inc_by_add(&i);
    // cout<<i<<endl;

    inc_by_ref(i);
    cout<<i<<endl;
    return 0;
}
