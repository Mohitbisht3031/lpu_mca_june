#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 5;
    int b = 7;

    // using 3rd variable
    // int temp = a;
    // a = b;
    // b = temp;
    
    // without using 3rd var.

    // a = a+b;
    // b = a-b;
    // a = a-b;

    // 3rd way XOR(^)
    // a = a^b;
    // b = a^b;
    // a = a^b;

    //4th way stl swap()

    swap(a,b);

    return 0;
}