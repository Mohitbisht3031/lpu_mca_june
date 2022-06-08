#include<bits/stdc++.h>
 using namespace std;

 int main(){

     int x = 10;
     int*ptri = &x;

    //  cout<<ptri<<endl;
    //  *ptri+1 -> x
    // cout<<ptri+1<<endl;
    // cout<<(*ptri)+1<<endl;
    //  cout<<x<<endl;
    //  x++;
    //  cout<<*ptri<<endl;

    char ch = 'a';
    char*ptrch = &ch;

    if(sizeof(ptri) == sizeof(ptrch)){
        cout<<"They are same.!"<<endl;
    }else{
        cout<<"No they are not same.!"<<endl;
    }

     return 0;
 }