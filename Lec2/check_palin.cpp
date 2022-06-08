#include<bits/stdc++.h>
 using namespace std;

// check palindrom 
// madam -> this is a test case let say
/*bool check_palin(string s){
    int start = 0;
    int end = s.size()-1;

    while(start<= end){
        if(s[start] != s[end])return 0;
        start++;
        end--;
    }

    return 1;
}*/
// 1. base case
// 2. recursive call
// 3. Small cal./ our job.

// int n
// fact.!
// n! = n*(n-1)*(n-2)...*1;

bool helper(string s,int start,int end){
    // base case
    if(start == end)return 1;

    // small cal./ our job
    if(s[start] != s[end])return 0;

    // recursive call
    return helper(s,start+1,end-1);
}

bool check_palin(string s){
    return helper(s,0,s.size()-1);
}

 int main(){
     string s;
     cin>>s;

     if(check_palin(s)){
         cout<<"Yes.! it is a palindrom.!"<<endl;
     }else{
         cout<<"No.! it's not.!"<<endl;
     }

     return 0;
 }