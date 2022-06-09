#include<bits/stdc++.h>
 using namespace std;

void display(int arr[],int s){
    for(int i  = 0;i<s;i++){
        cout<<arr[i]<<" ";
    }
    return;
}

 int main(){

     int arr[] = {0,1,2,3,4};
     int size = sizeof(arr)/sizeof(arr[0]);
    //  cout<<arr[2]<<endl;
    //  arr[2] = 200;
    //  cout<<arr[2]<<endl;
    
    display(arr,size);
    // for(int i = 0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }

     return 0;
 }