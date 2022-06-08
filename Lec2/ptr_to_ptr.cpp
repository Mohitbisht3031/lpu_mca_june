#include<bits/stdc++.h>
 using namespace std;

 int main(){

     int x = 10;
     int*ptr1 = &x;
     int**ptr2 = &ptr1;

     cout<<ptr1<<endl;
     cout<<ptr2<<endl;
     cout<<*ptr2<<endl;
     cout<<*ptr1<<endl;
     cout<<**ptr2+1<<endl;


     return 0;
 }