#include<bits/stdc++.h>
// #include<string>
 using namespace std;

 void display(int arr[],int size){
     for(int i = 0;i<size;i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;
     return;
 }

 int main(){
    string str;
    getline(cin,str);

    // cout<<str<<endl;
    string ans = "";

    stringstream ss(str);    
    string x = "";
    while(getline(ss,x,' ')){
        // cout<<x<<endl;
        x[0] = toupper(x[0]);
        ans+=' '+x;
    }
    ans = ans.substr(1);
    cout<<ans<<endl;
    return 0;
 }